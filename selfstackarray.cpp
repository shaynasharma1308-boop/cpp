#include<iostream>
using namespace std;

class arraystack{
public:
    int arr[100];
    int top = -1;

    bool isempty(){
        return top == -1;
    }

    void push(int val){
        if(top >= 99){
            cout << "stack overflow" << endl;
            return;
        }
        arr[++top] = val;
    }

    void pop(){
        if(isempty()){ cout << "empty stack\n"; return; }
        cout << "popped: " << arr[top--] << endl;
    }

    void peek(){
        if(isempty()){ cout << "empty stack\n"; return; }
        cout << "top element: " << arr[top] << endl;
    }

    void traverse(){
        if(isempty()){ cout << "empty stack\n"; return; }
        for(int i = top; i >= 0; i--){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    arraystack a;
    a.push(10);
    a.push(20);
    a.push(30);
    a.peek();      // top element: 30
    a.pop();       // popped: 30
    a.traverse();  // 20 10
    return 0;
}