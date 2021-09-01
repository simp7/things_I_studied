#include "stdio.h"

inline int max(int a, int b){return a > b ? a : b;}

int main() {
    int n, tmp, result = 0, rope[10001] = {0};
    scanf("%d", &n);

    for (int i = 0; i < n; i ++) {
        scanf("%d", &tmp);
        rope[tmp] ++;
    }

    tmp = 0;
    for (int i = 10000; i > 0; i --) {
        tmp += rope[i];
        result = max(result, i*tmp);
    }

    printf("%d\n", result);

}