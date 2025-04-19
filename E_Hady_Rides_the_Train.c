#include <stdio.h>

int main()
{
    long long int id;

    scanf("%lld", &id);

    long long int row = id / 4;
    long long int col = id % 4;

    if (row % 2 == 1)
    {
        col = 3 - col;
    }

    printf("%lld %lld\n", row, col);

    return 0;
}