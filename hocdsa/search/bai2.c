// Mục đích: Tìm vị trí của k trong mảng đã sắp xếp bằng tìm kiếm nhị phân

#include <stdio.h>
int search(int a[], int n, int k){
    int l = 0, r = n - 1;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] == k){
            return m + 1;
        }
        else if(a[m] > k) r = m - 1;
        else if(a[m] < k) l = m + 1;
    }
    return -1;
}
int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("%d", search(a, n, k));
    return 0;
}