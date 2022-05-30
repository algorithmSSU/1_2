#include <iostream>
using namespace std;
// 비재귀적으로 하노이탑 코드
void hanoi(int n, int from, int mid, int to);
int main(){




}

// hanoi(3, 1, 2, 3)
void hanoi(int n, int from, int mid, int to){
    // n-1만큼 반복
    // from에서 n-1만큼

    int count;
    do{

        if (n==1){
            cout << "원판 [1]을(를)" << from << " 번 기둥에서" << to << " 로 옮긴다." << endl;
        }
        else{
            cout << "원판 [" << count++;
        }

    } while (count == n - 1);
}