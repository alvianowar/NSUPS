#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    int i;
    for (i = 0; i < T; i++)
    {
        int number1, number2;
        scanf("%d",&number1);
        scanf("%d",&number2);
        int sum;
        sum = number1 + number2;
        printf("%d\n",sum);
    }
    return 0;
}
