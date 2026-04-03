// Mục đích: Mô phỏng queue với 3 thao tác: thêm, xóa và in phần tử đầu

#include <stdio.h>
#define MAX 100005
int main(){
    int t;
    scanf("%d", &t);
    int f = 0, r = 0;
    int queue[MAX];
    while (t--)
    {
        int type;
        scanf("%d", &type);
        if(type == 1){
            int u;
            scanf("%d", &u);
            queue[r++] = u;
        }
        else if(type == 2){
            if(f < r) f++;
        }
        else if(type == 3){
            if(f < r){
                printf("%d\n", queue[f]);
            }
            else{
                printf("Empty!\n");
            }
        }
    }
}