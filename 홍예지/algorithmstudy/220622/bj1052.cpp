#include <iostream>
#include <vector>
using namespace std;


int water_bottle(int freq,int count);

int main(){

    int f = 3;
    int c = 1;

    cout << water_bottle(13,2);




};


int water_bottle(int freq, int count){
    int result;
    int cnt = 1;
    int temp;
    int fre;
    int a, b;

    vector<int> v(freq, 1);
    vector<int> r;

    for (int i = 0; i < freq-1; i+2){
        for (int j = 1; j < freq;j+2){
            if(v[i]==v[j]){
                r.push_back(cnt * 2);
            }
        }
    }

    return cnt;
}