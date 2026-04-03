// Mục đích: Mô phỏng hàng đợi (queue) bằng mảng với thao tác thêm cuối và xóa đầu

#include <stdio.h>
#define MAX 1000005
int main(){
    int n;
    scanf("%d", &n);
    int queue[MAX];
    int f = 0, r = 0;
    for(int i = 0; i < n; i++){
        int type;
        scanf("%d", &type);
        if (type == 1)
        {
            if(f < r){
                f++;
            }
        }
        else if(type == 2){
            int u;
            scanf("%d", &u);
            if(r < MAX){
                queue[r++] = u;
            }
        }
    }
    for(int i = f; i < r; i++){
        printf("%d ", queue[i]);
    }
}