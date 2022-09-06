// level 3. 정수 삼각형
// 사용 알고리즘 : dp
// https://school.programmers.co.kr/learn/courses/30/lessons/43105


#include <string>
#include <vector>

using namespace std;
vector<vector<int>> v;

int dp[501][501];
int solution(vector<vector<int>> triangle) {
    int answer = 0;
    int size=triangle.size();
    
    dp[0][0]=triangle[0][0];
    for(int i=0;i<=size-2;i++){
        for(int j=0;j<i+1;j++){
            dp[i+1][j]=max(dp[i+1][j],dp[i][j] + triangle[i+1][j]);
            dp[i+1][j+1]=max(dp[i+1][j+1],dp[i][j] + triangle[i+1][j+1]);
        }
    }
    for(int i=0;i<size;i++){
        if(answer < dp[size-1][i]) answer = dp[size-1][i];
    }
    
   
    return answer;
}
