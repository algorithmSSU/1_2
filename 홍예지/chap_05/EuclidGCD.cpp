#include <iostream>
using namespace std;

int gcd(int x, int y);

int main(){

    // int num, num2;
    // num = 5;
    // num2 = 21;

    // // 0%21
    // // 21%0

    // cout << "5/21= " << num / num2 << endl;
    // cout << "21/5= "<< num2 / num << endl;

    int first, second;

    cout << "�� ������ �ִ������� ���մϴ�." << endl;

    cout << "������ �Է��ϼ���: ";

    cin >> first;

    cout << "������ �Է��ϼ���: ";

    cin >> second;

    cout << "�ִ������� " << gcd(first, second) << "�Դϴ�." << endl;
}

int gcd(int x,int y){
    if (y==0){
        return x;
    }else{
        return gcd(y, x % y); // if x==0 �̸�, 0%1 = 1
    }
}