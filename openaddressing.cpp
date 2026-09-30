#include<iostream>
using namespace std;
const int SIZE = 10;
void insertLinear(int table[], int key, int &probes){
    for(int i = 0; i < SIZE; i++){
        int index = (key % SIZE + i) % SIZE;
        probes++;
        if(table[index] == -1){
            table[index] = key;
            return;
        }
    }
}

void insertQuadratic(int table[], int key, int &probes){
    for(int i = 0; i < SIZE; i++){
        int index = (key % SIZE + i * i) % SIZE;
        probes++;
        if(table[index] == -1){
            table[index] = key;
            return;
        }
    }
}

void show(int table[]){
    for(int i = 0; i < SIZE; i++){
        cout << i << ": ";
        if(table[i] == -1) cout << "-";
        else cout << table[i];
        cout << endl;
    }
}

int main(){
    int linear[SIZE], quad[SIZE];
    for(int i = 0; i < SIZE; i++){
        linear[i] = -1;
        quad[i] = -1;
    }

    int keys[] = {15, 25, 35, 45, 12, 22};
    int probesL = 0, probesQ = 0;
    for(int i = 0; i < 6; i++){
        insertLinear(linear, keys[i], probesL);
        insertQuadratic(quad, keys[i], probesQ);
    }

    cout << "Linear probing:" << endl;
    show(linear);
    cout << "Total probes: " << probesL << endl << endl;

    cout << "Quadratic probing:" << endl;
    show(quad);
    cout << "Total probes: " << probesQ << endl;
    return 0;
}