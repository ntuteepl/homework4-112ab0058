#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    int ans = 1; // 預設為質數
    for(int i = 2; i < num; i++) {
        if (num % i == 0) {
            ans = 0; // 如果能被整除，不是質數
            break; // 可以提前結束迴圈
        }
    }
    return ans;//回傳0或是1
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);

        if (isPrime(num)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}

