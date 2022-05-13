#include <iostream>
using namespace std;
// *을 n개 출력하되 w개마다 줄 바꿈
int main(){
    int n, w;

    
    do{
        cout << "enter n: ";
        cin >> n;
    } while (n <= 0);

    do
    {
        cout << "enter w: ";
        cin >> w;
    } while (w <= 0);



    int count = 0;
    for (int i = 0; i < n;i++){
        cout << "*";
        count += 1;
        if (count==w){
            cout << "\n";
            count = 0;
        }
    }
}