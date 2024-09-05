#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>

using namespace std;

int dp[1005][1005], n, k;

string a, b;

int f(int n, int m) {
	int &ref = dp[n][m];
	if (n < 0 || m < 0) return 0;
	if (ref != -1) return ref;
	ref = 0;
	ref = max(f(n - 1, m), f(n, m - 1));
	if (a[n] == b[m]) ref = max(ref, f(n - 1, m - 1) + 1);
	return ref;
}

int main() {
	cin >> a >> b;
	memset(dp, -1, sizeof(dp));
	printf("%d\n", f(a.size() - 1, b.size() - 1));
	return 0;
}