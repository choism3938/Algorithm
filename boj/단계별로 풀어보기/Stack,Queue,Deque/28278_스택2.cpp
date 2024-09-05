/*
1 X: 정수 X를 스택에 넣는다. (1 ≤ X ≤ 100,000)
2: 스택에 정수가 있다면 맨 위의 정수를 빼고 출력한다. 없다면 -1을 대신 출력한다.
3: 스택에 들어있는 정수의 개수를 출력한다.
4: 스택이 비어있으면 1, 아니면 0을 출력한다.
5: 스택에 정수가 있다면 맨 위의 정수를 출력한다. 없다면 -1을 대신 출력한다.
*/
#include<iostream>
#include<stack>
#include<cstdio>
using namespace std;

int main(){
    int n;
    cin >> n;
    stack<int> s;
    for(int i=0;i<n;i++){
        int num,x;
        scanf("%d", &num);
        if(num == 1){
            scanf("%d", &x);
            s.push(x);
        }
        else if(num == 2){
            if(s.empty()) printf("-1\n");
            else {
               
                printf("%d\n", s.top());
                s.pop();
            }
        }
        else if(num == 3){
            printf("%d\n",s.size());
        }
        else if(num ==4){
            if(s.empty()) printf("1\n");
            else printf("0\n");
        }
        else{
            if(s.empty())printf("-1\n");
            else printf("%d\n",s.top());
        }
    }
}