#include <iostream>
using namespace std;
// �迭 ����� �ִ��� ���(���� �Է¹���)

int maxOf(int *a);

int main(){

    int person;

    cout << "Ű�� �ִ��� ���մϴ�" << endl;

    cout << "����� :";
    cin >> person;

    int *height = new int[person];

    for (int i = 0; i < _msize(height) / sizeof(int);i++){
        cout << "height[" << i << "]: ";
        cin >> height[i];
    }

    cout <<"�ִ밪�� :" << maxOf(height) << endl;
}

int maxOf(int *a){
    int max;
    max = a[0];
    for (int i = 1; i < _msize(a) / sizeof(int);i++){
        if (a[i]>max){
            max = a[i];
        }
    }
    return max;
}