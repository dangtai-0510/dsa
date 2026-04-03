// Mục đích: Sắp xếp mảng giảm dần bằng Selection Sort (dùng j để tìm phần tử lớn nhất), sau đó in 3 phần tử đầu

#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        int max = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] > a[max]){
                max = j;
            }
        }
        int temp = a[i];
        a[i] = a[max];
        a[max] = temp;
    }
    
    printf("%d %d %d", a[0], a[1], a[2]);
}