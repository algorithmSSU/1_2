#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

#define MAX_SIZE 100


int N, M;
int graph[MAX_SIZE][MAX_SIZE];
bool visited[MAX_SIZE][MAX_SIZE];
int dist[MAX_SIZE][MAX_SIZE];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

bool IsInside(int ny, int nx){
    return (0 <= ny && 0 <= nx && nx < M && ny < N);
}

void bfs(int y,int x){
    queue<pair<int, int>> q;
    visited[y][x] = true;

    q.push(make_pair(y, x));
    while(!q.empty()){
        y = q.front().first;
        x = q.front().second;
        q.pop();

        for (int i = 0; i < 4;i++){
            int ny = y + dy[i];
            int nx = x + dx[i];

            if(IsInside(ny,nx)&& graph[ny][nx] && !visited[ny][nx]){
                visited[ny][nx] = true;
                dist[ny][nx] = dist[y][x] + 1;
                q.push(make_pair(ny, nx));
            }
        }
    }
}

int main(){

    memset(graph, false, sizeof(graph));
    memset(visited, false, sizeof(visited));

    memset(dist, false, sizeof(dist));
}