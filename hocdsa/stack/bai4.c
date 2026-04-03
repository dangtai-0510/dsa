// Mục đích: Tìm và in ra các cặp vị trí ngoặc tròn khớp nhau trong chuỗi

#include <stdio.h>
#include <string.h>
int main(){
    char s[20005];
    scanf("%s", s);
    int stack[20005];
    int top = -1;
    int len = strlen(s);
    for(int i = 0; i < len; i++){
        if(s[i] == '('){
            stack[++top] = i + 1;
        }
        else if(s[i] == ')'){
            if(top >= 0){
                int u;
                u = stack[top--];
                printf("%d %d\n", u, i + 1);
            }
        }
    }
}