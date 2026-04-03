// Mục đích: Duyệt cây nhị phân dạng mảng theo thứ tự hậu tự (LRN - Left Right Node)

#include <stdio.h>
void hautt(int i, int a[], int n){
    if(i >= n || a[i] == -1) return;
    hautt(2 * i + 1, a, n);
    hautt(2 * i + 2, a, n);
    printf("%d ", a[i]);
}
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    hautt(0, a, n);
}