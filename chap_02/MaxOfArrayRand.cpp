#include <iostream>
#include <random>
using namespace std;
// �迭 ����� �ִ��� ���(���� ������ ����)

int MaxOf(int *arr);

int main(){

    int person;

    cout << "Ű�� �ִ��� ���մϴ�" << endl;

    cout << "����� :";
    cin >> person;

    int *height = new int[person];

    cout << "Ű ���� ������ �����ϴ�." << endl;

    for (int i = 0; i < _msize(height) / sizeof(int);i++){
        height[i] = 100 + rand() % 90;

    }

    for (int j = 0; j < _msize(height) / sizeof(int);j++){
        cout << "height["<< j << "]: "<< height[j] << endl;
    }

    cout << "�ִ밪�� " << MaxOf(height) << " �Դϴ�." << endl;
}

int MaxOf(int *arr){
    int max = arr[0];

    for (int i = 1; i < _msize(arr) / sizeof(int);i++){
        if (max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}