// Mục đích: Duyệt cây nhị phân dạng mảng theo thứ tự trung tự (LNR - Left Node Right)

#include <stdio.h>
void trungtt(int i, int a[], int n){
    if(i >= n || a[i] == -1) return;
    trungtt(2 * i + 1, a, n);
    printf("%d ", a[i]);
    trungtt(2 * i + 2, a, n);
}
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    trungtt(0, a, n);
}