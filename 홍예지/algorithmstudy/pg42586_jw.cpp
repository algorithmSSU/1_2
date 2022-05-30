#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds)
{
    vector<int> answer;
    vector<int>::iterator iter = progresses.begin(); // 맨 앞에를 가리키는 포인터

    while (iter != progresses.end()) // progress 끝가지돈다.
    {
        int cnt = 0;
        while (*iter >= 100 && iter != progresses.end()) // *iter -> iter이 갖는 값을 가리킴, (조건 : progresses값이 100이상이고, progresses 끝값이 아닐때까지)
        {
            ++cnt;  // 성공한 갯수
            ++iter; // iter(포인터)를 이동
        }

        // 각 progress에 speed 더해주기 (한번 돌때마다)
        for (int i = 0; i < progresses.size(); ++i)
            progresses[i] += speeds[i];

        // 성공한 갯수가 있을 때
        if (cnt != 0)
            answer.push_back(cnt); //성공한 갯수
    }

    return answer;
}

int main()
{
    vector<int> progress;
    vector<int> speed;
    /*progress.push_back(93);
    progress.push_back(30);
    progress.push_back(55);*/

    progress.push_back(95);
    progress.push_back(90);
    progress.push_back(99);
    progress.push_back(99);
    progress.push_back(80);
    progress.push_back(99);

    /*speed.push_back(1);
    speed.push_back(30);
    speed.push_back(5);*/

    speed.push_back(1);
    speed.push_back(1);
    speed.push_back(1);
    speed.push_back(1);
    speed.push_back(1);
    speed.push_back(1);

    vector<int> answer;

    answer = solution(progress, speed);

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << ' ';
    }
}