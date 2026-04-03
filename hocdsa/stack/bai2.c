// Mục đích: Mô phỏng stack với 3 thao tác: push, pop và in phần tử trên cùng

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int stack[1000];
    int top = -1;
    for(int i = 0; i < n; i++){
        int type;
        scanf("%d", &type);
        if(type == 1){
            int u;
            scanf("%d", &u);
            stack[++top] = u;
        }
        else if(type == 2){
            if(top >= 0){
                top--;
            }
        }
        else if(type == 3){
            if (top >= 0)
            {
                printf("%d\n", stack[top]);
            }
            else{
                printf("Empty!\n");
            }
        }
    }
}