// boj 7568. 덩치
// https://www.acmicpc.net/problem/7568
// brute force Algorithm
// 각 사람별로 자신보다 덩치 큰 사람을 찾아서 순위를 매긴다. 

#include<stdio.h>
#include<stdlib.h>

int arr[1000][1000];
int main(void)
{
	int N; 
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
		scanf("%d %d", &arr[i][0], &arr[i][1]);
		
	for (int i = 0;  i < N; i++)
	{
		int cnt = 1;
		for (int j = 0; j < N; j++)
		{
			if (arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1])
				cnt++;
		}
		printf("%d ", cnt);
	}

	return 0;
}
