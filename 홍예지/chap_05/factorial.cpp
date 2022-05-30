#include <iostream>
using namespace std;

int factorial(int num);

int main(){

    int num;
    int result = 1;
    int *ptr = &result;
    cout << "정수를 입력하세요: ";
    cin >> num;

    cout << factorial(num) << endl;
}


int factorial(int num){
    if (num>0){
        return num * factorial(num - 1);
    }else{
        return 1;
    }
}