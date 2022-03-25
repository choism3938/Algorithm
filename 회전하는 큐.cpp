#include<iostream>
#include<deque>
#include<vector>

using namespace std;



vector<int> v; // 지울 수들의 위치 
deque<int> dq; // deque

// n : 큐의 크기, m : 삭제할 값의 개수, cnt : 명령 실행 횟수, num : 삭제할 값
int n, m, cnt, num; 

void L_Move() {
	dq.push_back(dq.front());
	dq.pop_front();
}

void R_Move() {
	dq.push_front(dq.back());
	dq.pop_back();
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> num;
		v.push_back(num);
	}

	for (int i = 1; i <= n; i++) {
		dq.push_back(i);
	}

	//m개 제거 
	for (int i = 0; i < m; i++) {
		// deque에서 지울 요소 찾기 
		int l, r;
		for (int j = 0; j < dq.size(); j++) {
			if (dq[j] == v[i]) {
				l = j;
				r = dq.size() - j - 1;
			}
		}	
		if (l <= r) {
			while (dq.front() != v[i]) {
				L_Move();
				cnt++;
			}
			dq.pop_front();
		}
		else {
			while (dq.front() != v[i]) {
				R_Move();
				cnt++;
			}
			dq.pop_front();
		}
	}
	cout << cnt;
}
