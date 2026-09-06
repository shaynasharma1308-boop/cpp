//stack implementation using linked list
#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
node *top=NULL;
bool isempty(){
    return top==NULL;
}

void push(int val){
    node *newnode=new node();
    newnode->data = val;
    newnode->next = top;   
    top = newnode;         
}


void pop(){
    if(isempty()){return;}
    node *temp=top;
    top=top->next;
      int n=temp->data;
      cout<<"the popped value is"<<n<<endl;
      delete temp;
      
    
}

void peek(){
    if(isempty()){return;}
    cout<<"the top element is"<<endl;
    cout<< top->data<<endl;
}

void traverse(){
    node *temp = top; 
    if(isempty()){return;}
          
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    
    peek();
    pop();
    
    traverse();
    return 0;
}