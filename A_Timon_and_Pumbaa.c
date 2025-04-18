#include <stdio.h>

int main()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    long long int result = a - b;
    if (result < 0)
    {
        result = 0;
    }
    printf("%lld ", result);
    return 0;
}