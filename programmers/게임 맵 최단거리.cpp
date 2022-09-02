// 게임 맵 최단거리
// 현재 위치에서 상,하,좌,우 중 아직 방문하지 않고, 이동할 수 있는 곳(배열 값이 1) 탐색
// bfs 알고리즘 사용하여 목적지까지 이동
// 목적지 도착하면 프로그램 종료
// info 구조체 사용 / 현재위치 : (x,y), 거리 : dist

#include<vector>
#include<queue>

using namespace std;

int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
bool visit[101][101];

struct info{
    int x;
    int y;
    int dist;
};

int solution(vector<vector<int> > maps)
{
    int n = maps.size();
    int m = maps[0].size();
    queue<info> q;
    q.push({0,0,1});
    visit[0][0]=true;
    
    while(!q.empty()){
        int x = q.front().x;
        int y = q.front().y;
        int dist = q.front().dist;
        q.pop();
    
        if(x == n-1 && y== m-1) return dist;
        
        for(int i=0;i<4;i++){
            int nx = x+dx[i];
            int ny = y+dy[i];
            if(nx >= 0 && nx < n && ny >=0 && ny < m && !visit[nx][ny] && maps[nx][ny]){
                q.push({nx,ny,dist+1});
                visit[nx][ny]=true;
            }
        }
    }
    
    return -1;
}
