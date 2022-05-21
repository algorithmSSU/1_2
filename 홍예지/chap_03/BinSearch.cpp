#include <iostream>
using namespace std;

int main(){
    int num;
    int find;

    cout << "요솟수: ";
    cin >> num;

    int *arr = new int[num];

    cout << "오름차순으로 입력하세요." << endl;

    cout << "x[" << 0 << "]:";
    cin >> arr[0];

    for (int i = 1; i < num; i++)
    {
        do{
            cout << "x[" << i << "]:";
            cin >> arr[i];

        } while (arr[i] < arr[i - 1]);
        
    };

    cout << "검색할 값: ";
    cin >> find;


    if(find <= arr[num/2]){
        for (int i = 0; i <= num / 2;i++){
            if (arr[i]==find){
                cout << "그 값은 x[" << i << "]에 있습니다." << endl;
                break;
            }
        }
    }else if(find > arr[num/2]){
        for (int i = num / 2; i < num; i++){
            if(arr[i]==find){
                cout << "그 값은 x[" << i << "]에 있습니다." << endl;
                break;
            };
        };
    }else{
        cout << "그 값은 없습니다." << endl;
    };


    
}