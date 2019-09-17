#include<stdio.h>
int main()
{
    int test_case;
    scanf("%d",&test_case);
    int i;
    for (i = 0; i < test_case; i++)
    {
        int number1, number2;
        scanf("%d",&number1);
        scanf("%d",&number2);
        if( number1 > number2)
        {
            printf(">\n");
        }
        else if( number2 > number1)
        {
            printf("<\n");
        }
        else if(number1 == number2)
        {
            printf("=\n");
        }
    }
    return 0;
}
