#include<iostream>
#include<stack>

using namespace std;

int main(){
    int k;
    cin >> k;
    
    for(int i=0;i<k;i++){
        stack<int> st;
        string s;
        cin >> s;
        int chk=0;
        
        for(int i=0;i<s.length();i++){
            if(s[i] == '('){
                st.push(1);
            }
            else{
                if(st.empty()){
                    chk = 1;
                    cout << "NO\n";
                    break;
                }
                st.pop();
            }
        }
        if(chk) continue;
        
        if(st.empty()) cout << "YES\n";
        else cout << "NO\n";
        
        
    }
}