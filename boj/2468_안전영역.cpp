// 2468. 안전영역
// https://www.acmicpc.net/problem/2468
// 사용알고리즘 : Brute Force, DFS
// 물의 높이가 될 수 있는 모든 경우를 완전탐색으로 살펴보고, 안전영역을 DFS를 이용하여 탐색

#include <iostream>
#include <algorithm>

using namespace std;


int arr[101][101];
bool visited[101][101];
bool safe;
int N;

void init_visited() {

	for (int i = 0; i<N; i++) {

		for (int j = 0; j<N; j++) {

			visited[i][j] = false;
		}
	}
}


void dfs(int x, int y, int z) {

if (x >= 0 && y >= 0 && x<N && y<N) {
	
	if (visited[x][y] == false) {
		
		
		visited[x][y] = true;

		if (arr[x][y] - z>0) {

			safe = true;

			dfs(x - 1, y, z);

			dfs(x + 1, y, z);

			dfs(x, y - 1, z);

			dfs(x, y + 1, z);

		}

	}

}

}



int main()

{

int max_height = 0;
int max_cnt = 0;
int cnt = 0;


cin >> N;


for (int i = 0; i<N; i++) {

	for (int j = 0; j<N; j++) {
		cin >> arr[i][j];
		if (arr[i][j]>max_height) {
			max_height = arr[i][j];
		}

	}

}

for (int i = 0; i <= max_height; i++) {
	
	for (int j = 0; j<N; j++) {

		for (int k = 0; k<N; k++) {

			safe = false;

			dfs(j, k, i);

			if (safe == true) {

				cnt++;

			}

		}

	}

	max_cnt = max(max_cnt, cnt);
	
	init_visited();
	cnt = 0;

}

cout << max_cnt;

return 0;

}
