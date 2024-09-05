#include<iostream>
#include<queue>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    queue<int> q;
    for(int i=1;i<=n;i++){
        q.push(i);
    }
    vector<int> v;
    int cnt=0;
    while(!q.empty()){
        int now = q.front();
        q.pop();
        cnt++;
        if(cnt == k){
            v.push_back(now);
            cnt=0;
        }
        else{
            q.push(now);
        }    
    }
    
    cout<<"<";
    
    for(int i=0;i<v.size()-1;i++){
        cout<< v[i] << ", ";
    }

    cout << v[v.size()-1] << ">";
    
    
}
    
