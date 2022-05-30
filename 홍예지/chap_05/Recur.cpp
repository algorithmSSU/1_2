#include <iostream>
using namespace std;

void recur(int n);

int main(){

    int num;
    cout << "정수를 입력하세요: ";
    cin >> num;
    cout << "recur" << endl;
    recur(num);
};

void recur(int n){

    if(n>0){
        recur(n - 1);
        recur(n - 2);
        cout << n << endl;
        
    };
};

/*
n=4
recur(3) -> recur(2) -> recur(1) -> recur(0)
recur(0-2) -> reur(1-2) -> recur(2-2) -> reucr(3-2)



*/

