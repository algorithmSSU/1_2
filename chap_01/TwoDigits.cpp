#include <iostream>
using namespace std;
//2자리의 양수(10~99)를 입력
int main(){

    int no;

    do{
        cout << "Please enter a two-digit positive number." << endl;
        cin >> no;
    } while (!(no >= 10 && no <= 99)); // ! 드모르간의 법칙

    cout << "no : " << no;
}