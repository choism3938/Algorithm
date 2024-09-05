// boj 1152, 단어의 개수 

#include<stdio.h>

int main(){
    char s[1000000];
    gets(s);
    int a=0;
    int flag = 0;
    for (int i = 0 ; s[i] != '\0';i++){
        if(s[i] != ' ' && flag == 0){
            a++;
            flag = 1;
        }
        if (s[i] == ' '){
            flag = 0;
        }
    }
    printf("%d", a);
}
