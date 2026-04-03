// Mục đích: Mô phỏng stack với thao tác push (thêm) và pop (xóa), sau đó in toàn bộ stack

#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int top = -1;
    int stack[1000];
    for(int i = 0; i < n; i++){
        int type;
        scanf("%d",&type);
        if(type == 1){
            if(top >= 0){
                top--;
            }
        }
        else if(type == 2){
            int u;
            scanf("%d",&u);
            stack[++top] = u;
        }
    }
    for (int  i = 0; i <= top; i++)
    {
        printf("%d ", stack[i]);
    }
}