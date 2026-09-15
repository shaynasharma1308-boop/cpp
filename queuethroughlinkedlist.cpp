//implementing queue through linkedlist
#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
node *rear = NULL;
node *front=rear;
bool isempty(){
    return rear==NULL;
}
void enqeue(int val){
    node *newnode=new node();
    newnode->data=val;
    if(isempty()){rear=newnode;front=newnode;return;}
    rear->next=newnode;
    rear=newnode;
    
}

void deque(){
    if(isempty()){cout<<"empty queue"<<endl;return;}
        node *temp=front;
        
        cout<<temp->data<<endl;
        front=front->next;
        delete temp;
    
}
int main(){
    enqeue(10);
    enqeue(20);
    enqeue(30);
    enqeue(40);
    enqeue(50);
    deque();
    deque();
    deque();
    deque();
    return 0;
}