// 2675, 문자열 반복

#include<cstdio>
#include<algorithm>

using namespace std;

int n, r;
char arr[21];


void f() {
	int cnt = 0;
	for (int i = 0; arr[i] != '\0'; i++) {
		cnt++;
	}

	for (int i = 0; i < cnt; i++) {
		for (int j = 0; j < r; j++) {
			printf("%c", arr[i]);
		}
	}
	printf("\n");
}

int main() {

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %s", &r, arr);
		f();
	}

	
	return 0;
}