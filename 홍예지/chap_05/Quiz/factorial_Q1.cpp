#include <iostream>
using namespace std;

int facto(int x);

int main(){

    int num;
    cout << "������ �Է��ϼ���: ";
    cin >> num;
    cout << num << "�� ���丮���� " << facto(num) << "�Դϴ�." << endl;
}

int facto(int x){
    int result = 1;
    while (x>0){
        result = result * x;
        x--;};
    return result;
}