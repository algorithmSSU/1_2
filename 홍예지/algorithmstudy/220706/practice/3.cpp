#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;
#define MAX_SIZE 100
void dfs(int start);
vector<int> a[MAX_SIZE];

bool visited[MAX_SIZE];

int main(){

    int N, M;

    cin >> N >> M;

    for (int i = 0; i < M;i++){
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    };

    for (int i = 1; i < M;i++){
        if(!visited[i]){
            dfs(i);
        }
    }
};

void dfs(int start) /*파라미터를 시작 지점으로 해서 */
{
    visited[start] = true;
    cout << start << " ";

    for (int i = 0; i < a[start].size();i++){
        int x = a[start][i];
        if(!visited[x]){
            dfs(x);
        }
    }
}
