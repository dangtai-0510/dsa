// Mục đích: Duyệt cây nhị phân dạng mảng theo thứ tự tiền tự (NLR - Node Left Right)

#include <stdio.h>
void tientt(int i, int a[], int n){
    if(i >= n || a[i] == -1) return;
    printf("%d ", a[i]);
    tientt(2 * i + 1, a, n);
    tientt(2 * i + 2, a, n);
}
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    tientt(0, a, n);
}