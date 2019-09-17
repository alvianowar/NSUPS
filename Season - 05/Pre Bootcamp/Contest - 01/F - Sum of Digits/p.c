#include<stdio.h>

int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int a,b,sum = 0;
        scanf("%d",&a);
        while(a!= 0)
        {
            b = a%10;
            a = a/10;
            sum = sum+b;
        }
        printf("%d\n",sum);
    }
    return 0;
}
