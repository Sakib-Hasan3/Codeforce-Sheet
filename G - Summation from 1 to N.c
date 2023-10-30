#include <stdio.h>

int main()
{
   long long int n, summation;
    scanf("%lld", &n);
    summation = (n * (n + 1)) / 2;
    printf("%lld", summation);
    return 0;
}
