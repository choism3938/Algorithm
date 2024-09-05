#include<iostream>
#include<algorithm>

using namespace std;

pair<int,int> dp[41];

int main(){
    int t;
    cin >> t;

    dp[0].first = 1;
    dp[0].second =0;
    dp[1].first = 0;
    dp[1].second = 1;
    for(int i=2;i<=41;i++){
        dp[i].first = dp[i-1].first + dp[i-2].first;
        dp[i].second = dp[i-1].second + dp[i-2].second;
    }
    for(int i=0;i<t;i++){
        int num;

        cin >>num;
        cout << dp[num].first << " " << dp[num].second << endl;
    }
}
