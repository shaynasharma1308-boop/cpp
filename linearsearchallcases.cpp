#include<iostream>
#include<array>
using namespace std;
void linearsearchbestcase(int array[],int key,int size){
    cout<<"the best case means only one comparsion is required"<<endl;
    int count=0;
   
    for(int i=0;i<size;i++){
        count++;
      if(array[i]==key){
         cout<<"index at which key is found"<<" "<<i<<endl;
         return;
      }
      else continue;
    }
    cout<<"the total number of comparisons "<<count<<endl;
}

void linearsearchavgcase(int array[], int key,int size){
    cout<<"the average case means we have to find the middle element"<<endl;
    int count=0;
     
     for(int i=0;i<size;i++){
        count++;
      if(array[i]==key){
        cout<<"index at which key is found"<<" "<<i<<endl;
        return;
      }
      else continue;
    }
     cout<<"the total number of comparisons "<<count<<endl;
}
void linearsearchworstcase(int array[], int key,int size){
    cout<<"the worst case means we have to find the last element"<<endl;
     int count=0;
    
     for(int i=0;i<size;i++){
        count++;
      if(array[i]==key){
         cout<<"index at which key is found"<<" "<<i<<endl;
         return;
      }
      else continue;
    }
    cout<<"the total number of comparisons "<<count<<endl;
}

int main(){
    int a1[]={1,2,3,4,5};
    int a2[]={2,1,4,5,3};
    int a3[]={1,2,3,4,5};
    int size=sizeof(a1)/sizeof(a1[0]);
    linearsearchbestcase(a1,1,size);
    linearsearchavgcase(a2,4,size);
    linearsearchworstcase(a3,5,size);
    return -1;
}