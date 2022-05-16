#include <iostream>
using namespace std;

int main(){

    int n;
    char arr[10][10] = {};

    cin >> n;

    int num = 2 * n - 1;

    int count = 0;
    char star = '*';

    for (int j = 0; j < num; j++){
        for (int i = 0; i < 10; i++)
        {
            arr[i][i] = star;
            arr[i][num - i] = star;
        };
    };

    for (int x = 0; x < num; x++){
        cout << "\n";
        for (int y = 0; y < 10; y++){
            cout << arr[x][y];
        }
    }
}