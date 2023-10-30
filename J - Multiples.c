#include <stdio.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    printf((A % B == 0 || B % A == 0) ? "Multiples\n" : "No Multiples\n");
    return 0;
}
