#include <stdio.h>

int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    switch (num > 0)
    {

        case 1:
            printf("%d is positive.", num);
        break;


        case 0:
            switch (num < 0)
            {
                case 1:
                    printf("%d is negative.", num);
                    break;
        default:
                    printf("The inputted data is Invalid.", num);

            }
        break;
    }

    return 0;
}
