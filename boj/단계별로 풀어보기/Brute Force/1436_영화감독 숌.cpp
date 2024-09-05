// boj 1436. 영화감독 숌
// https://www.acmicpc.net/problem/1436
// brute force algorithm
// 1부터 n보다 작은수들 중 666이 연속된 숫자가 있는지 찾는다. 

#include<cstdio>
#include<stdlib.h>

int n;

bool f(int num) {

	while (num >= 666) {

		if (num % 1000 == 666) return true;
		num /= 10;
	}

	return false;
}

int main()
{
    scanf("%d", &n);
	int num = 666;
	int cnt = 1;

	while (cnt<n) {
		num++;
		if (f(num)) cnt++;
	}
	printf("%d", num);
	return 0;
}
