#include<iostream>


using namespace std;


int dp[11];


int f(int n){
    if(dp[n]) return dp[n];
    if(n == 1 || n ==2 ) return dp[n] = n;
    else if(n == 3) return dp[n] = 4;
    else return dp[n] = f(n-1) + f(n-2) + f(n-3);

}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        cout << f(n) << endl;
    }
}
