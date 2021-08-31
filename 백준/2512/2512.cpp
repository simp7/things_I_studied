#include <stdio.h>
#include "algorithm"

int main() {

    int n, m, result, total = 0;
    scanf("%d", &n);

    int ask[n];
    for (int i = 0; i < n; i ++) {
        scanf("%d", ask + i);
        total += ask[i];
    }

    scanf("%d", &m);

    std::sort(ask, ask + n);

    if (total <= m) {
        result = ask[n-1];
    } else {

        int i = 0;
        while (ask[i]*(n-i) <= m) {
            m -= ask[i];
            i ++;
        }

        result = m/(n-i);

    }

    printf("%d\n", result);

}