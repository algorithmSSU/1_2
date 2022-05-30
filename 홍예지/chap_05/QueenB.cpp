#include <iostream>
using namespace std;

void print(int* pos);
void set(int* pos,int i);

int main(){

    int *pos = new int[8];
    set(pos, 0);
}


void print(int *pos){
    for (int i = 0; i < 8;i++){
        cout << pos[i];
    };
    cout << "\n";
};


void set(int *pos,int i){
    for (int j = 0; j < 8;j++){
        pos[i] = j;
        if (i==7){
            print(pos);
        }else{
            set(pos,i + 1);
        }
    }
}