#include<stdio.h>

// following is a program that returns user's telephone bill of a month
/*
based on this info
line rent = 150 tk
Local call = 1.0 tk
ISD call = 5.0 tk
vat = 15%
*/

int main()
{
    int local,isd;
    float bill;

    printf("How many local calls? \n");
    scanf("%d",&local);

    printf("\nHow many International calls? \n");
    scanf("%d",&isd);

    bill = (150+local*1.0+isd*5.0)*0.15;

    printf("Your Telephone bill is: %f",bill);
    return 0;
}
