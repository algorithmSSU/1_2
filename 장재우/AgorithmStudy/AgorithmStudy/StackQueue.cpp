#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds)
{

    int p_size = progresses.size();
    int s_size = speeds.size();
    int p_temp;
    int s_temp;
    int* arr = new int[p_size];

    vector<int> result;
    vector<int> result_fin;

    for (int i = 0; i < p_size; i++)
    {
        p_temp = progresses[i];
        s_temp = speeds[i];
        int sum_temp;
        int count = 0;
        do
        {
            p_temp = p_temp + s_temp;
            count++;

        } while (p_temp <= 100);
        result.push_back(count);
        count = 0;
    };

    int t;
    int size = result.size();




    for (int j = 0; j < size; j++)
    {
        result_fin.push_back(result.back());
        result.pop_back();
    };



    int temp;
    int tmp;
    int fin_count = 1;
    vector<int>final;

    ///////이부분 수정해보기 //////
    do
    {
        temp = result_fin.back();
        result_fin.pop_back();

        if (temp >= result_fin.back()) {
            fin_count++;
        }
        else {
            fin_count = 1;
            final.push_back(fin_count);
        }

    } while (result_fin.capacity() == 0);


    vector<int> answer;
    answer.push_back(2);
    // answer.push_back(1);
    return final;
}

int main() {
    vector<int> progress;
    vector<int> speed;
    progress.push_back(93);
    progress.push_back(30);
    progress.push_back(55);

    speed.push_back(1);
    speed.push_back(30);
    speed.push_back(5);

    vector<int> answer;

    answer = solution(progress, speed);

}