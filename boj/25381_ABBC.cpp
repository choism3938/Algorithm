// 25381. ABBC
// 사용 알고리즘 : deque
// 문자열을 입력받고 반복문을 이용하여 각 문자마다 탐색한다.
// 문자 'A' 의 인덱스를 덱 A에 저장
// 문자 'B' 의 인덱스를 덱 B에 저장
// 문자 'C' 가 나오면 덱 B의 front 값을 'C'와 매칭시켜준다. (cnt값 증가) cnt -> 최대 횟수 , 이 때 B는 비어있지 않아야 함.  
// 문자열 탐색이 끝난 후 덱A 와 덱B의 front값을 비교하여 매칭시켜준다. 
// 이 때 A 인덱스 값이 B 인덱스 값보다 작아야 한다. 


#include<iostream>
#include<deque>
#include<algorithm>

using namespace std;

deque<int> a;
deque<int> b;
    

int main(){
    string s;
    cin >> s;
    int cnt=0;
    for(int i=0;i<s.length();i++){
        if(s[i] == 'A') a.push_back(i);
        else if(s[i] == 'B') b.push_back(i);
        else{
            if(!b.empty()){
                b.pop_front();
                cnt++;    
            }
        }
    }
    while(!a.empty() && !b.empty()){
        int now_a  = a.front();
        int now_b = b.front();
        if(now_a < now_b){
            cnt++;
            a.pop_front();
            b.pop_front();
        }
        else{
            b.pop_front();
        }
    }
    cout << cnt;
    
}
