#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

using std::pair;

using namespace std;

#define MAXSIZE 1000

bool visited[MAXSIZE][MAXSIZE];
int dist[MAXSIZE][MAXSIZE];
int graph[MAXSIZE][MAXSIZE];
int N, M;  // row, col



void bfs(int y, int x);
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

bool IsInside(int ny, int nx){
    return (ny >= 0 && nx >= 0 && nx < M && ny < N);
}


int main(){

    /*2차원 배열 초기화
    memset(초기화할 대상, 초기화 값, 초기화 대상 사이즈)
    */
    memset(graph, false, sizeof(graph));
    memset(visited, false, sizeof(visited));
    memset(dist, false, sizeof(dist));


    cin >> N >> M;

    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            cin >> graph[i][j];
        }
    };

    bfs(0, 0);

    cout << dist[N - 1][M - 1] << endl;
};

void bfs(int y, int x){
    queue<pair<int,int>> q;
    q.push(make_pair(y,x));
    dist[y][x] = 1;
    visited[y][x] = true;

    while(!q.empty()){
        int x, y;
        y = q.front().first;
        x = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++){
            int ny, nx;
            ny = y + dy[i];
            nx = x + dx[i];

            if(IsInside(ny,nx) && graph[ny][nx] && !visited[ny][nx]){
                visited[ny][nx] = true;
                dist[ny][nx] = dist[y][x] + 1;
                q.push(make_pair(ny, nx));
            }
        }
    }
}

