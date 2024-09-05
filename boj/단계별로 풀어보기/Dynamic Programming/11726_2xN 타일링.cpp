// 11726 2xN 타일링
// 사용 알고리즘 : DP
// 가로의 길이 N 길이의 타일은 N-1 또는 N-2 길이의 타일링에서 추가로 타일을 더하면 만들 수 있다. 
// 따라서 dp[n] = dp[n-1] + dp[n-2] 의 점화식을 구할 수 있다. 

#include<cstdio>

using namespace std;

int dp[1001];
int main() {
	int n;
	scanf("%d", &n);

	dp[1] = 1;
	dp[2] = 2;
	
	if( n>2)
		for (int i = 3; i <= n; i++) {
			dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
		}
	printf("%d", dp[n]);

	return 0;
}
