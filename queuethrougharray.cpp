//implementing queue through array
#include <iostream>
using namespace std;

template <typename t>
class arrayqueue {
public:
    t array[100];
    int front; 
    int rear;  

    arrayqueue() {
        front = 0;
        rear = 0;
    }

   
    bool isempty() { 
        return front == rear; 
    }

   
    bool isfull() {
        return rear == 100;
    }

    void enque(t val) {
        if (isfull()) {
            cout << "Queue Overflow" << endl;
            return;
        }
        array[rear] = val; // Insert at the current rear index
        rear++;            // Move rear forward
    }

    void deque() {
        if (isempty()) {
            cout << "empty queue" << endl;
            
            front = 0;
            rear = 0;
            return;
        }
        cout << array[front] << endl; // Print the front element
        front++;                      // Move front forward
    }
};

int main() {
    arrayqueue<int> c; 
    c.enque(10);
    c.enque(20);
    c.enque(30);
    c.enque(40);
    c.enque(50);
    
    c.deque(); 
    c.deque(); 
    
    return 0;
}
