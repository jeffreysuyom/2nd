#include<stdio.h>
int main ()
 {

    int g1, g2, sum, mul, div, sub;
    printf("Input any 2 integer:");
    scanf("%d%d",&g1,&g2);

    sum = g1+g2;
    printf("ADD: %d\n",sum);

    mul = g1*g2;
    printf("MUL: %d\n",mul);

    div = g1/g2;
    printf("DIV: %d\n",div);

    sub = g1-g2;
    printf("SUB: %d\n",sub);


    return 0;

}



