#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main() {
	int n, x;
	string s;
	cin >> n >> x;
	map<string, int> m;

	for (int i = 0; i < n; i++) {
		cin >> s;
		m.insert({ s,1 });
	}
	int cnt = 0;
	for (int i = 0; i < x; i++) {
		cin >> s;
		auto it = m.find(s);
		if (it != m.end()) {
			cnt++;
		}
	}
	cout << cnt;
}