#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int ara[100];
    int ara2[100];
    int counting = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ara[i] = x;
        ara2[i] = x;
    }
    sort(ara, ara+n);
    for(int i = 0; i < n; i++)
    {
        if(ara[i] == ara2[i])
            counting++;
    }
    if((n - counting) <= 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
