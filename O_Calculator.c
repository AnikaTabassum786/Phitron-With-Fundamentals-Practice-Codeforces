#include <stdio.h>

int main()
{

    int A, B;
    char S;
    int result;
    scanf("%d %c %d", &A, &S, &B);

    if (S == '+')
    {
        result = A + B;
        printf("%d", result);
    }
    else if (S == '-')
    {
        result = A - B;
        printf("%d", result);
    }
    else if (S == '*')
    {
        result = A * B;
        printf("%d", result);
    }
    else
    {
        result = A / B;
        printf("%d", result);
    }

    return 0;
}