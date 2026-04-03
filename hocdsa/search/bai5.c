// Mục đích: Tìm giá trị lớn nhất trong mảng <= x bằng tìm kiếm nhị phân

#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b){
    long long x = *(long long*)a;
    long long y = *(long long*)b;
    return (x>y) - (x<y);
}
long long timday3(long long x, long long a[], long long n){
    long long l = 0, r = n - 1, ans = -1;
    while(l <= r){
        int m = (l+r) / 2;
        if(a[m] <= x){
            ans = a[m];
            l = m + 1;
        }
        else{
            r = m - 1;
        }
    }
    return ans;
}
int main(){
    long long n;
    scanf("%lld", &n);
    long long a[n];
    for(int i = 0; i < n; i++){
        scanf("%lld", &a[i]);
    }
    qsort(a, n, sizeof(long long), cmp);
    long long t;
    scanf("%lld", &t);
    while(t--){
        long long x;
        scanf("%lld", &x);
        printf("%lld\n", timday3(x, a, n));
    }
}