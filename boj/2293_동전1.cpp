
// boj 2293. 동전 1
// 사용 알고리즘 : dp 

#include<cstdio>

int dp[10001] = { 1 };
int coin[101];

int main() {
	int n,k;
	scanf("%d%d", &n, &k);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &coin[i]);

		for (int j = coin[i]; j <= k; j++) {
			dp[j] += dp[j - coin[i]];
		}
	}
	printf("%d", dp[k]);
}
