#include <iostream>
using namespace std;
//1000������ �Ҽ��� ����

// ver1: ���� for������, 2�̻� ���� ������ �� �ٷ� �� ���ڱ����� ������������ �����ؼ� 
// ��� ���ڰ� ������ �������� ������ �� �ϳ��� ����� ������ �ʴ´ٰ� �Ǵ� -> �Ҽ�
int main(){
    int counter;
    for (int i = 2; i <= 1000; i++){
        int j;
        for (j = 2; j < i; j++){
            counter++;
            if (i%j==0){
                break;
            }
        }if (i==j){
            cout << i << endl;
        }
    }

    cout << "�������� ������ Ƚ�� :" << counter << endl;
}