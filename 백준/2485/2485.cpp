#include "stdio.h"
#include "algorithm"

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a%b);
}

int main() {

    int n, distance, result;
    scanf("%d", &n);

    int input[n], dist[n-1];
    for (int i = 0; i < n; i ++) {
        scanf("%d", input + i);
    }

    std::sort(input, input+n);

    dist[0] = input[1] - input[0];

    for (int i = 1; i < n-1; i ++) {
        dist[i] = input[i+1] - input[i];
    }

    std::sort(dist, dist+n-1);
    distance = dist[0];

    for (int i = 0; i < n-2; i ++) {
        distance = gcd(dist[i], distance);
    }

    result = (input[n-1] - input[0]) / distance - n + 1;
    printf("%d\n", result);

}