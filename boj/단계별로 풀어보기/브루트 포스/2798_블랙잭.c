// boj 2798. 블랙잭
// Brute force algorithm
// n개의 카드에서 3장을 뽑을 수 있는 모든 경우를 살펴보고 정답을 구한다.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int m;
    int arr[100];
    int sum;
    int ans=0;
    scanf("%d%d", &n, &m);
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                sum=arr[i]+arr[j]+arr[k];
                if(sum <=m){
                    if(ans < sum) ans = sum;
                }
            }
        }
    }
    printf("%d", ans);
    return 0;
}
