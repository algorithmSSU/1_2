#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> arr);

int main(){

    vector<int> arr;
    arr.push_back(3);
    arr.push_back(0);
    arr.push_back(6);
    arr.push_back(1);
    arr.push_back(5);

    cout << solution(arr);
};

int solution(vector<int> arr)
{
    int size = arr.size();
    int sum = 0;
    int average;
    int cnt, cnts;

    vector<int>::iterator p;

    for(p=arr.begin(); p < arr.end();p++){
        sum = sum + *p;
    };
    average = sum / size;

    /*
    cout << "sum: " << sum << endl;
    cout << "size: " << size << endl;
    cout << "aver: " << average << endl;
    */

    vector<int>::iterator ptr;

    while(cnt!=cnts){
        for (ptr = arr.begin(); ptr < arr.end();ptr++){
            if (average >= *ptr){
                cnt++;
                cout << cnt;
            }
            if(average<= *ptr){
                cnts++;
                cout << cnts;
            }
        }if (cnt==cnts){
            break;
        }else{
            average--;
        }
    }



    return average;
};
