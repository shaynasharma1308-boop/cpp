#include<iostream>
#include<string>
#include<array>

using namespace std;
void countsort(char arr1[], char arr2[],int size){
    
 int count1[256] = {0};
    for (int i = 0; i < size; i++) {
        unsigned char index = static_cast<unsigned char>(arr1[i]);
        count1[index]++;
    }
    int arrindex1 = 0;
    for (int i = 0; i < 256; i++) {
        while (count1[i] > 0) {
            arr1[arrindex1++] = static_cast<char>(i);
            count1[i]--;
        }
    }
    int count2[256] = {0};
    for (int i = 0; i < size; i++) {
        unsigned char index = static_cast<unsigned char>(arr2[i]);
        count2[index]++;
    }
    int arrindex2= 0;
    for (int i = 0; i < 256; i++) {
        while (count2[i] > 0) {
            arr2[arrindex2++] = static_cast<char>(i);
            count2[i]--;
        }
    }
  for(int k=0;k<size;k++){
    if(arr1[k]!=arr2[k]){cout<<"not Anagram"<<endl; return;}
    }
    cout<<"anagarm"<<endl;
  }


void isanagram(string s1,string s2){
    int size1=s1.size();
    int size2=s2.size();
    if(size1==size2){cout<<"the sizes are same, first requirement completed"<<endl;}
    else{cout<<"it can't be done!"<<endl;
    return;}
    char arr1[size1];
    char arr2[size2];
    for(int i=0;i<size1;i++){
        arr1[i]=s1[i];
    }
    for(int j=0;j<size2;j++){
       arr2[j]=s2[j];
    }

    countsort(arr1,arr2,size1);}

