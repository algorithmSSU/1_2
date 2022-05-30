#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds)
{
    vector<int> answer;
    vector<int>::iterator iter = progresses.begin(); // 맨 앞에를 가리키는 포인터
    vector<int>::iterator front = progresses.begin(); // vector<int>*front = progresses.begin();
    vector<int>::iterator end = progresses.end(); //맨 뒤를 가리키는 포인터

    // 맨 앞을 가리키는 포인터

    int cnt;

    while (front != progresses.end()){

        for (int i = 0; i < progresses.size();i++){
            progresses[i] += speeds[i];
        };
    

        if (*front >= 100)
        {
            cnt = 0; // 0 초기화
            for (vector<int>::iterator i = front; i < end; i++)
            {
                if (*i < 100)
                {
                    break;
                }
                else
                {
                    cnt++;
                };
            };
            answer.push_back(cnt);
            front += cnt;
        }
    }

        return answer;
}

int main(){
    vector<int> progress;
    vector<int> speed;
    progress.push_back(93);
    progress.push_back(30);
    progress.push_back(55);

    /*progress.push_back(95);
    progress.push_back(90);
    progress.push_back(99);
    progress.push_back(99);
    progress.push_back(80);
    progress.push_back(99);*/

    speed.push_back(1);
    speed.push_back(30);
    speed.push_back(5);

    /*speed.push_back(1);
    speed.push_back(1);
    speed.push_back(1);
    speed.push_back(1);
    speed.push_back(1);
    speed.push_back(1);*/

    vector<int> answer;

    answer = solution(progress, speed);

    for (int i = 0; i < answer.size();i++){
        cout << answer[i] << ' ';
    }
}