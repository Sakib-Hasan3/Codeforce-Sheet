#include <stdio.h>

int main()
{
    long long int N, M;
    scanf("%lld %lld", &N, &M);
    int last_digit_N = N % 10;
    int last_digit_M = M % 10;
    int sum_last_digits = last_digit_N + last_digit_M;
    printf("%d\n", sum_last_digits);
    return 0;
}
