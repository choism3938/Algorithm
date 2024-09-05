#include <iostream>

using namespace std;
long long memo[1000001];


int main() {

	int n;
	scanf("%d", &n);
	
	memo[0] = 0;
	memo[1] = 1;
	memo[2] = 2;

	for(int i=3;i<=1000000;i++)
		memo[i] = (memo[i- 1] + memo[i - 2])%15746;
	
	printf("%d", memo[n]);

}