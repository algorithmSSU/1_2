#include <iostream>
using namespace std;
// 1000������ �Ҽ��� ����
// ¦��(2����) -> �Ҽ�x
// Ȧ�������� ������ �������� �ʴ� ���ڸ� ã�ƺ��� ��� ���̵��

int main(){

    int counter = 0;
    int ptr = 0;
    int *prime = new int[500];

    prime[ptr++] = 2;

    for (int i = 3; i <= 1000; i+=2){
        int j;
        for (j = 1; j < ptr; j++){
            counter++;
            if(i%prime[j]==0){
                break;
            }
        }if (ptr==j){
            prime[ptr++] = i;
        }
    };
    for (int i = 0; i < ptr; i++)
    {
        cout << prime[i] << endl;
    };
    cout << "�������� ������ Ƚ�� : " << counter << endl;
}
