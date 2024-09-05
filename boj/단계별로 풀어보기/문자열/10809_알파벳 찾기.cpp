#include<cstdio>
#include<algorithm>

using namespace std;

char arr[100];
int cnt;

int main() {
	scanf("%s", arr);
	
	for (int i = 0; i < 100; i++) {
		if (arr[i] == '\0') break;
		else cnt++;
	}
	
	for (int i = 97; i <= 122; i++) {
		int idx =-1;
		bool chk = false;
		for (int j = 0; j < cnt; j++) {
			
			if ((int)arr[j] == i) {
				chk = true;
				idx = j;
				break;
			}
		}
		printf("%d ", idx);
	}
	
	return 0;
}