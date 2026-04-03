// Mục đích: In các số từ 1 đến n dưới dạng nhị phân

#include <stdio.h>
void xulistp(int x){
    int a[50];
    int index = 0;
    while(x > 0){
        a[index++] = x % 2;
        x /= 2;
    }
    for(int i = index - 1; i>=0; i--){
        printf("%d", a[i]);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i<=n;i++){
        xulistp(i);
        printf(" ");
    }
}