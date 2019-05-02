#include<stdio.h>

// function contains switch statement
void grade_check(int m)
{
    int k;
    k=m/10;

    switch(k){

    case 0: case 1: case 2: case 3: case 4:
        printf("\nSorry! Your grade is F");
        break;
    case 5:
        printf("\nYour grade is D");
        break;
    case 6:
        printf("\nYour grade is C");
        break;
    case 7:
        printf("\nYour grade is B");
        break;
    case 8: case 9: case 10:
        printf("\nWOAH!!!! Your grade is A");
        break;

    default:
        printf("\nInvalid keyword");
        break;

    }
}

int main(){

    int number;

    printf("Enter your examination number: \n");

    scanf("%d",&number);

    // calling Function
    grade_check(number);

    return 0;
}
