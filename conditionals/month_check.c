#include <stdio.h>


void month_check(int month)
{
    if(month == 1)
        printf("Month is January");
    else if(month == 2)
        printf("Month is February");
    else if(month == 3)
        printf("Month is March");
    else if(month == 4)
        printf("Month is April");
    else if(month == 5)
        printf("Month is May");
    else if(month == 6)
        printf("Month is June");
    else if(month == 7)
        printf("Month is July");
    else if(month == 8)
        printf("Month is August");
    else if(month == 9)
        printf("Month is September");
    else if(month == 10)
        printf("Month is October");
    else if(month == 11)
        printf("Month is November");
    else if(month == 12)
        printf("Month is December");
    else
        printf("Invalid output");
}

int main()
{
    int a;
    printf("Month Number: \n");
    scanf("%d",&a);
    month_check(a);
    return 0;
}
