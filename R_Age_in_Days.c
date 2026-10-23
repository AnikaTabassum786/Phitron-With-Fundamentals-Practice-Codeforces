#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    // printf("%d",n);

    int year;
    int month;
    int day;
    int reminder;



    year = n / 365;
    reminder = n % 365;

    month = reminder / 30;
    day = reminder % 30;

    printf("%d years\n", year);
    printf("%d months\n", month);
    printf("%d days", day);

    return 0;
}