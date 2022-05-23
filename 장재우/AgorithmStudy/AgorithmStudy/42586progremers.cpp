#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int>::iterator iter = progresses.begin();

    while (iter != progresses.end()) {
        int cnt = 0;
        while (*iter >= 100 && iter != progresses.end()) {
            ++cnt;
            ++iter;
        }

        for (int i = 0; i < progresses.size(); ++i)
            progresses[i] += speeds[i];

        if (cnt != 0)
            answer.push_back(cnt);
    }

    return answer;
}