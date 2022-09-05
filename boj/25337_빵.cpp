// 25377. 빵
// 사용 알고리즘 : 그리디 알고리즘
// https://www.acmicpc.net/problem/25377

// 도착시간과 빵이 구워지는 시간을 pair<int,int>를 이용하여 묶는다.
// 묶은 후 빵이 구워지는 시간을 기준으로 오름차순으로 정렬 (cmp 함수 사용)
// 가장 먼저 나오는 ( 도착시간 <= 빵이 구워지는 시간) 을 찾아서 빵이 구워지는 시간 출력

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}

int main(){
    int n;
    cin >> n;
    vector<pair<int,int>> info;
    for(int i=0;i<n;i++){
        pair<int,int> tmp;
        cin >> tmp.first >> tmp.second;
        info.push_back(tmp);
    }

    sort(info.begin(), info.end(), cmp);
    for(int i=0;i<n;i++){
        if(info[i].first <= info[i].second){
            cout << info[i].second;
            return 0;
        }
    }
    cout << -1;
    
}
