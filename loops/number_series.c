#include<stdio.h>

int main()
{

    int i;
    //int j,k,l,h;

    printf("Enter a Number: ");
    scanf("%d",&i);

    // add 1+2+3+.....+n
    add_upto_n(i);

    // add 1^2+2^2+3^2+...............+n^n
    add_square(i);



    return 0;
}


// a function that add a series like 1+2+3+4+.....+n
int add_upto_n(int n)
{
    int g;
    int sum=0;
    for(g=0;g<=n;g++)
    {
        sum = sum+g;
    }

    printf("\n add from 1+2+3+...%d is = %d\n",n,sum);
}


// a function that add a series like 1^2+2^2+3^3+...........+n^n
int add_square(int n)
{
    int h;
    int sumSqu = 0;
    for(h=0;h<=n;h++)
    {
        sumSqu = sumSqu + (h*h);
    }
    printf("\n add from 1^2 +2^2 +3^2 +...%d^2 is = %d",n,sumSqu);
}
