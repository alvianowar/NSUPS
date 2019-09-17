#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,sum,ara[n];
    sum = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d",&ara[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + ara[i];
    }
    printf("%d\n",sum);
    return 0;
}
