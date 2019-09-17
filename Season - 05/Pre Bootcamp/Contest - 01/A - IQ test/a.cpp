#include <iostream>

using namespace std;

int main()
{
    int n, even = 0, odd = 0;
    int ara[100];
    cin >> n;
    int d, k;
    for(int i = 0; i < n; i++)
        cin >> ara[i];
    for(int i = 0; i < n; i++)
    {
        if(ara[i] % 2 == 0)
        {
            even++;
            d = i+1;
        }
        if(ara[i] % 2 != 0)
        {
            odd++;
            k = i+1;
        }
    }
    if(even > odd)
        cout << k << endl;
    else
        cout << d << endl;
    return 0;
}
