#include <iostream>
using namespace std;

// ���� �Ʒ��� ������ �̵�ﰢ���� ���
int main(){

    int h;

    cout << "���� �Ʒ��� ������ �̵�ﰢ���� ���" << endl;

    do{
        cout << "�� �� �ﰢ���Դϱ�? :";
        cin >> h;

    } while (h <= 0);

    for (int i = 1; i <= h; i++){
        for (int j = 0; j < i;j++){
            cout << "*";
        };
        cout << "\n";
    }
}

