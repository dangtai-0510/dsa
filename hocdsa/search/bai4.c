// Mục đích: Kiểm tra x có tồn tại trong mảng (sau khi sắp xếp) bằng tìm kiếm nhị phân

#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
    long long x = *(long long*)a;
    long long y = *(long long*)b;
    return (x > y) - (x < y);
}

int timday2(long long x, long long n, long long a[]){
    int l = 0, r = n - 1;
    while(l <= r){
        int m = l + (r - l) / 2;
        if(a[m] == x) return 1;
        else if(a[m] > x) r = m - 1;
        else l = m + 1;
    }
    return 0;
}

int main(){
    long long n;
    scanf("%lld",&n);

    long long a[n];
    for (int i = 0; i < n; i++){
        scanf("%lld", &a[i]);
    }

    qsort(a, n, sizeof(long long), cmp);

    int t;
    scanf("%d", &t);

    while(t--){
        long long x;
        scanf("%lld", &x);

        if(timday2(x, n, a)){
            printf("Y\n");
        } else {
            printf("N\n");
        }
    }
}