#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    int n = citations.size();
    int i = 0;

    sort(citations.begin(), citations.end());

    for (int i = 0; i < n; ++i)
        cout << citations[i] << " ";
    cout << "\n";

    for (i = 0; i < n; ++i) {
        cout << n - (i + 1) << "\n";
        if (n - (i + 1) < citations[i])
            break;
    }

    answer = (n - i);

    return answer;
}
