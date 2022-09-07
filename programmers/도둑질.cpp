// level 4. 도둑질
// 사용 알고리즘 : dp
// https://school.programmers.co.kr/learn/courses/30/lessons/42897
// 처음 집을 기준으로 털었을 때, 털지 않았을 때, 2가지 경우를 모두 살펴본 후 가장 최댓값 출력

#include <string>
#include <vector>

using namespace std;
int dp[1000001]; // 처음집 턴 경우 
int dp2[1000001]; // 처음집 안턴 경우

int solution(vector<int> money) {
    int size=money.size();
    int answer = 0;
    dp[0]=money[0];
    dp[1]=money[0];
    for(int i=2;i<size-1;i++){
        dp[i]=max(dp[i-2]+money[i], dp[i-1]);
    }
    
    dp2[0]=0;
    dp2[1]=money[1];
    for(int i=2;i<size;i++){
        dp2[i]=max(dp2[i-2]+money[i],dp2[i-1]);
    }
    
    answer = max(dp[size-2],dp2[size-1]);
    
    return answer;
}
