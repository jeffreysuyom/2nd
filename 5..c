#include <stdio.h>
int add(int num1, int num2, int num3, int num4, int num5);

int main()
{
    int g1, g2, g3,g4, g5, sum, div;
    printf("Enter your Math Grade:");
    scanf("%d", &g1);
    printf("Enter your English Grade:");
    scanf("%d", &g2);
    printf("Enter your Science Grade:");
    scanf("%d", &g3);
    printf("Enter your Filipino Grade:");
    scanf("%d", &g4);
    printf("Enter your History Grade:");
    scanf("%d", &g5);

    sum = add(g1, g2, g3,g4, g5);
    printf("SUM = %d\n",sum);


    div = sum/5;
    printf("AVERAGE:%d\n", div);


    return 0;
}
int add(int num1, int num2,int num3, int num4, int num5)
{
    int func_sum;
    func_sum = num1+num2+num3+ num4+ num5;
    return func_sum;

}
