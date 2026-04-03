// Mục đích: Tìm số nhỏ nhất dạng m^2 + 1 sao cho >= x bằng tìm kiếm nhị phân

#include <stdio.h>
long long timday1(long long x, long long n){
    long long l = 0, r = n - 1, ans = n;
    while(l <= r){
        long long m = (l + r) / 2;
        if(m * m + 1 >= x){
            ans = m;
            r = m - 1;
        }
        else{
            l = m + 1;
        }
    }
    return ans * ans + 1;
}
int main(){
    long long n;
    int t;
    scanf("%lld", &n);
    scanf("%d", &t);
    while(t--){
        long long x;
        scanf("%lld", &x);
        printf("%lld\n", timday1(x, n));
    }
}