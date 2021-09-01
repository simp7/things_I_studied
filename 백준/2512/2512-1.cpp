#include "stdio.h"

int main() {

    int n, m, right, mid, left, max = 0, budget, answer = 0;
    scanf("%d", &n);

    int ask[n];
    for(int i = 0; i < n; i ++) {
        scanf("%d", ask + i);
        max = max > ask[i] ? max : ask[i];
    }
    scanf("%d", &m);

    left = 0;
    right = max+1;

    while (left + 1 < right) {

        budget = 0;
        mid = (left + right) / 2;
        for(int i = 0; i < n; i ++) {
             budget += ask[i] <= mid ? ask[i] : mid;
        }

        if (budget <= m) {
            left = mid;
            answer = mid;
        } else {
            right = mid;
        }

    }

    printf("%d\n", answer);

}