/******************************************************************************

    i일 차 -> 상담을 진행
    
    dp[i] = i일차때까지 얻을 수 있는 최대 금액을 저장  
    
    
    i일 상담 o -> i + day[i]  현재 날짜 : i , 다음 상담 가능 날짜 : temp = i + day[i]
    다음 상담 가능날짜 -> dp[temp] = max(dp[i] + price[i] , dp[temp])
    
    i일 상담 x -> temp = i + 1
    dp[temp] = max(dp[temp], dp[i])
    
    
    dp[i] : i 번째날 얻을 수 있는 최대 금액
    dp[1] ~ dp[n] 값중 최대값을 찾아서 출력 
    

*******************************************************************************/


#include <iostream>

using namespace std;

int dp[10001];

int main()
{
    int n;
    cin >> n;
    int day[n+1];
    int price[n+1];
    
    for(int i=1;i<=n;i++){
        cin >> day[i] >> price[i];
     
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        int temp = i +day[i];
        int temp2 = i + 1;
        
        //상담을 할때 
        if(temp <= n+1){
            dp[temp] = max(dp[temp], dp[i] + price[i]);
        }
        
        // 상담을 안했을 때 
        if(temp2 <= n+1 ){
            dp[temp2] = max(dp[temp2], dp[i]);
        }
        
        ans = max(max(dp[temp], dp[temp2]),ans);
    }
    cout << ans;
   
    
   
    return 0;
}
