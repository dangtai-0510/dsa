// Mục đích: Tìm vị trí xuất hiện cuối cùng của k trong mảng (duyệt từ phải sang)

#include <stdio.h>
int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int i = n - 1;
    while (i >= 0)
    {
        if(a[i]==k){
            printf("%d", i+1);
            return 0;
        }
        i--;
    }
    printf("-1");
}