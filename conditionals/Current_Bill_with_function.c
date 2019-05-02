#include <stdio.h>

int CurrentBill(int usage)
{
    int bill;

    if(usage<=200)
    {
        bill = usage*5;

    }
    else if(usage>200 && usage<300)
    {
        bill = (200*5) + ((usage-200)*7);

    }
    else{
        bill = 200*5 + 100*7 + ((usage-300)*10);

    }

    return bill;
}

int main()
{
    int usage,measure;
    //int bill;
    printf("Enter your usage amount: ");
    scanf("%d",&usage);

    measure = CurrentBill(usage);

    printf("Your current bill is %d taka",measure);



}

