#include<stdio.h>

int main()
{
    char c[100];
    int i = 1;
    while(gets(c))
    {
        if(c[0] != '*')
        {
            if(c[0] == 'H')
                printf("Case %d: Hajj-e-Akbar\n",i);
            if(c[0] == 'U')
                printf("Case %d: Hajj-e-Asghar\n",i);
        }
        i++;
    }
    return 0;
}
