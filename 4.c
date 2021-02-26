#include<stdio.h>

int main()
{
    long int integer, sum=0;
    int rem;

    printf("Input any integer:");
    scanf("%ld", &integer);



    if (integer<=0){
    printf("The inputted data is Invalid");
    }

    else {
    while (integer != 0)
    {
    rem=integer%10;
    sum=(sum*10)+rem;
    integer=integer/10;
    }
    printf("%ld\n", sum);
    }





    return 0;
}
