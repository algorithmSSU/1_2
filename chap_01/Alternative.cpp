#include <iostream>
using namespace std;

//+와 -를 번갈아 출력


int main(){
    int n;

    cout << "n output alternately + and -" << endl;
    cout << "enter n :";
    cin >> n;

    for (int i = 0; i < n / 2;i++){
        cout << "+-";
    }
    if (n%2!=0){
        cout << "+";
    }


}