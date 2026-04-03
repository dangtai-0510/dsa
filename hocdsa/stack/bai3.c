// Mục đích: Kiểm tra chuỗi ngoặc có hợp lệ hay không bằng stack

#include <stdio.h>
#include <string.h>
int main(){
    char s[1005];
    scanf("%s", s);
    int top = -1;
    int hople = 1;
    int stack[1005];
    for(int i = 0; i < strlen(s); i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{' || s[i] == '<'){
            stack[++top] = s[i];
        }
        else if(s[i] == ')' || s[i] == ']' || s[i] == '}' || s[i] == '>'){
            if(top == -1){
                hople = 0;
                break;
            }
            char t = stack[top--];
            if ((s[i] == ')' && t != '(') || 
                (s[i] == ']' && t != '[') || 
                (s[i] == '}' && t != '{') ||
                (s[i] == '>' && t != '<'))
            {
                hople = 0;
                break;
            }
        }
    }
    if (top != -1)
    {
        hople = 0;
    }
    printf("%d", hople);
}