#include <iostream>
using namespace std;

bool *flag_a = new bool[8];

bool *flag_b = new bool[15];

bool *flag_c = new bool[15];

int *pos = new int[8];


void print(){
    for (int i = 0; i < 8; i++){
        cout << pos[i];
    };
    cout << "\n";
};

void set(int i){
    for (int j = 0; j < 8; j++){
        if(flag_a[j]==false &&
        flag_b[i+j]==false &&
        flag_c[i-j+7]==false){
            pos[i] = j;
            if(i==7){
                print();
            }else{
                flag_a[j] = flag_b[i + j] = flag_c[i - j + 7] = true;
                set(i+1);
                flag_a[j]= flag_b[i + j] = flag_c[i - j + 7] = false;
            }
        }
    }
}

int main(){

    set(0);
}