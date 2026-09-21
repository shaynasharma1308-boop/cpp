#include<iostream>
#include<array>
using namespace std;
void mediansearch(int array[],int size){
    int mid=size/2;
    if(mid%2!=0){
        cout<<"the array is of odd entries"<<endl;
        cout<<"the median is"<<endl;
        cout<<array[mid/2]<<endl;
    }
    else if(mid%2==0){
        cout<<"the array is of even entries"<<endl;
        cout<<"the median is"<<endl;
        cout<<array[mid/2]+array[mid-1];
    }
}

int main(){
    int array1[]={1,2,3,4,5,6,7};
    int size1=sizeof(array1)/sizeof(array1[0]);
    mediansearch(array1,size1);
    int array2[]={5,6,7,8};
    int size2=sizeof(array2)/sizeof(array2[0]);
    mediansearch(array2,size2);
    return 0;
}