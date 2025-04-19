#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        long long l, r;

        scanf("%lld %lld", &l, &r);

        if (l > r) {
            long long temp = l;
            l = r;
            r = temp;
        }

        long long sum_r = (r * (r + 1)) / 2;
        long long sum_l_minus_1 = ((l - 1) * l) / 2;
        long long sum = sum_r - sum_l_minus_1;

        printf("%lld\n", sum);
    }

    return 0;
}