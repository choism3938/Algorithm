#include <iostream>
#include <string>
#include<algorithm>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());    
    string ans = (a > b) ? a : b;
    cout << ans;
    
    return 0;
}