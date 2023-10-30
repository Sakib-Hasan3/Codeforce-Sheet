#include <stdio.h>
int main()
{
    int A, B;
    char S;

    // Read the input
    scanf("%d %c %d", &A, &S, &B);
    int result;
    if (S == '+')
    {
        result = A + B;
    } else if (S == '-')
    {
        result = A - B;
    } else if (S == '*') 
    {
        result = A * B;
    } else if (S == '/') 
    {
        result = A / B;
    }
    printf("%d\n", result);

    return 0;
}
