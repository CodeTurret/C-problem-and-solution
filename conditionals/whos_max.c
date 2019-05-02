#include <stdio.h>

// function determines which one is the max between 3 numbers
int whos_max(int a, int b, int c)
{
    int largest;
    if(a>b && a>c)
    {
        largest = a;
    }
    else if (b>a && b>c)
    {
        largest = b;
    }
    else
        largest = c;

    return largest;
}

int main()
{
    int a,b,c,k;
    printf("Enter 3 numbers: ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    // calling function
    k = whos_max(a,b,c);
    printf("%d is max between %d,%d,%d",k,a,b,c);


    return 0;
}
