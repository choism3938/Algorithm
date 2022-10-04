// boj 2231. 분해합
// Brute force Algorithm
// 1부터 N-54 까지 분해합을 만들어 본 후 N이 나오는 수를 찾는다. 

#include<cstdio>
#include<stdlib.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    for(int i =n-54;i<n;i++){
        int tmp=i, sum =i;
        while(tmp){
            sum+=tmp%10;
            tmp/=10;
        }
        if(sum==n){
            printf("%d", i);
            return 0;
        }
    }
    printf("0");
    return 0;
}
