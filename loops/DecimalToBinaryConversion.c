#include<stdio.h>
#include<math.h>

// A simple function that converts a Decimal number into binary
int DecToBin(int a)
{
    int save[100];
    int i,j;

    // every time save the remainder in the array, then divide the quotient by 2
    for(i=0;a!=0;i++)
    {
    save[i] = a%2;
    a=a/2;
    }


    // print the array in reverse
     for(j=i-1;j>=0;j--)
    {
        printf("%d",save[j]);
    }
}

int main()
{
    int x;


    printf("Enter a decimal number: ");
    scanf("%d", &x);

    DecToBin(x);

    return 0;

}
