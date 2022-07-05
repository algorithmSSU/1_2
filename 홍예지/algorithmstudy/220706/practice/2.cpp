#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void swap(vector<int> a,int idx_a, int idx_b);
int main(){
    vector<int> a[3];

    a[0].push_back(4);
    a[0].push_back(1);
    a[0].push_back(0);
    sort(a[0].begin(), a[0].end());

    a[1].push_back(9);
    a[1].push_back(3);
    a[1].push_back(1);

    a[2].push_back(2);
    a[2].push_back(7);
    a[2].push_back(4);

/*
    for (int i = 0; i < 3;i++){
        for (int j = 0; j < a[i].size()-1;j++){
            int x = a[i][j];
            int y = a[i][j+1];
            if(x>y){
                swap(a[i], j, j+1);
            }else{
                continue;
            }
        }
    };
*/
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < a[i].size();j++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}
/*
void swap(vector<int> a, int idx_a, int idx_b){
    int temp = a[idx_a];
    a[idx_a] = a[idx_b];
    a[idx_b] = temp;
}*/