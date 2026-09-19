#include<iostream>
using namespace std;
struct node{
    int value;
    struct node* next;
    struct node* prev;
};
node*head=NULL;
void insertathead(int val){
    node *newnode=new node();
    
    newnode->value=val; 
    newnode->next=head;
    head->prev=newnode;
    newnode->prev=NULL;
    head=newnode;
} 

void insertattail(int val){
    node *newnode=new node();
    newnode->value=val;
    node *temp=head;
    newnode->next=NULL;
    if(head==NULL){head=newnode;
    newnode->prev=NULL;
    newnode->next=NULL;}
    while(temp->next!=NULL){
        temp=temp->next;
        temp->next=newnode;
       
        newnode->prev=temp;
        temp=newnode;
    }
}

void insertatposition(int val,int pos){
    node *newnode=new node();
    newnode->value=val;
    node *temp=head;
    if(temp==NULL){cout<<"invalid position \n";}
    for(int i=1;i<pos-1 && temp!=NULL ; i++){
        temp=temp->next;
        temp->next=newnode;
        newnode->prev=temp;
        newnode->next=temp->next->next;
        temp=newnode;
    }
}

void deletevalue(int val){
    node *temp=head;
    if(temp==NULL){cout<<"invalid value \n";}
    while(temp!= NULL && temp->value !=val){
        temp=temp->next;
        head=temp;
        delete temp;
    }
}

void forwardtraverse(){
    node *temp=head;
    if(head==NULL){cout<<"empty list \n";}
    while(temp!=NULL){
        cout<<temp->value;
        temp=temp->next;
        cout<<endl;
    }
}

void backtraverse(){
    node *temp=head;
    if(head==NULL){cout<<"empty list \n";}
    while(temp!=NULL){
        temp=temp->next;
    }
    while(temp !=NULL){
        cout<<temp->value<<endl;
        temp=temp->prev;
        cout<<endl;
    }

}

int main(){
    insertathead(10);
    cout<<endl;
    insertathead(20);
    cout<<endl;
    insertathead(30);
     cout<<endl;
    insertathead(40);
     cout<<endl;
    insertattail(50);
     cout<<endl;
    forwardtraverse();
    backtraverse();
    deletevalue(20);
    forwardtraverse();
    return 0;
}