// 14889 스타트와 링크 
// 사용 알고리즘 : 완전탐색 + DFS
// bool 타입 배열을 이용하여 팀을 나눈다. 
// dfs 알고리즘을 이용하여 두팀으로 나눈다.
// 두 팀을 나눌 수 있는 모든 경우를 구하여 최적의 정답을 찾아낸다. 


#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int arr[21][21];
bool team[21]; // true는 스타트 false는 링크
int MINIMUM = 100;
int N,score_start,score_link;

void dfs(int a, int b) {
	if (b == N / 2) {
		for (int i = 0; i<N; i++) {
			if (team[i] == true) {
				for (int j = 0; j<N; j++) {
					if (i != j&&team[j] == true) {
						score_start = score_start + arr[i][j];
					}
				}
			}
			else {
				for (int j = 0; j<N; j++) {
					if (i != j&&team[j] == false) {
						score_link = score_link + arr[i][j];
					}
				}
			}		
		}
		if (MINIMUM>abs(score_link - score_start)) MINIMUM = abs(score_link - score_start);
		score_start = 0;
		score_link = 0;
	}
	else {
		for (int i = a; i < N; i++) {
			if (team[i] == false) {
				team[i] = true;
				dfs(i, b + 1);
				team[i] = false;
			}
			else
				continue;
		}
	}
}

int main()

{
	cin >> N;
	for (int i = 0; i<N; i++) {
		for (int j = 0; j<N; j++) {
			cin >> arr[i][j];
		}
	}
	dfs(0, 0);

	cout << MINIMUM;

	return 0;
}
