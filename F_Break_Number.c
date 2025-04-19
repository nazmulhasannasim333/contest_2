#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long int num;
    int maxNum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &num);
        int currentNum = 0;
        while (num % 2 == 0)
        {
            num /= 2;
            currentNum++;
        }
        if (maxNum < currentNum)
        {
            maxNum = currentNum;
        }
    }
    printf("%d", maxNum);
    return 0;
}