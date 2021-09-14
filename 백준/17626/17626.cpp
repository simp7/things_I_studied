#include <stdio.h>
#include "algorithm"

int main() {

    int n, dp[50001] = {0};
    std::fill(dp + 2, dp + 50001, 4);

    for (int i = 1; i*i <= 50000; i ++) {
        dp[i*i] = 1;
    }

    scanf("%d",&n);

    for (int i = 1; i <= n; i ++) {
        for (int j = 1; j*j < i; j ++) {
            dp[i] = std::min(dp[i], dp[i - j*j] + 1);
        }
    }

    printf("%d\n", dp[n]);

}