// 25379. 피하자
// 사용 알고리즘 : 그리디 알고리즘
// https://www.acmicpc.net/problem/25379

// 짝수와 홀수가 인접하는 경우가 1개인 경우는 짝수는 짝수끼리, 홀수는 홀수끼리 나열되어야 한다. 
// 짝수 - 홀수 and 홀수 - 짝수 2가지 경우를 살펴보고 최소 횟수를 출력 

#include<stdio.h>
#include<vector>

using namespace std;
int main(){
    long long int n, num;
    vector<long long int> v;

    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%lld", &num);
        v.push_back(num);
    }

    // 짝 홀
    long long int cnt=0;
    long long int ans=0;
    for(int i=0;i<n;i++){
        if(v[i] %2==1){
            cnt++;
        }
        else{
            ans+=cnt;
        }
    }
    long long int answer = ans;
    
    //홀짝
    cnt=0;
    ans=0;
    for(int i=0;i<n;i++){
        if(v[i] %2==0){
            cnt++;
        }
        else{
            ans+=cnt;
        }
    }
    if(answer > ans) answer= ans;
    printf("%lld", answer);
    return 0;
}
