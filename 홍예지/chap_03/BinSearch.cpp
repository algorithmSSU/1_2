#include <iostream>
using namespace std;

int main(){
    int num;
    int find;

    cout << "��ڼ�: ";
    cin >> num;

    int *arr = new int[num];

    cout << "������������ �Է��ϼ���." << endl;

    cout << "x[" << 0 << "]:";
    cin >> arr[0];

    for (int i = 1; i < num; i++)
    {
        do{
            cout << "x[" << i << "]:";
            cin >> arr[i];

        } while (arr[i] < arr[i - 1]);
        
    };

    cout << "�˻��� ��: ";
    cin >> find;


    if(find <= arr[num/2]){
        for (int i = 0; i <= num / 2;i++){
            if (arr[i]==find){
                cout << "�� ���� x[" << i << "]�� �ֽ��ϴ�." << endl;
                break;
            }
        }
    }else if(find > arr[num/2]){
        for (int i = num / 2; i < num; i++){
            if(arr[i]==find){
                cout << "�� ���� x[" << i << "]�� �ֽ��ϴ�." << endl;
                break;
            };
        };
    }else{
        cout << "�� ���� �����ϴ�." << endl;
    };


    
}