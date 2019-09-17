#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        int ara[100101];
        int min = 0, min2 = 0;
        for(int i = 0; i < n; i++)
            cin >> ara[i];
        sort(ara, ara+n);
        cout << ara[0] + ara[1] << endl;
    }
    return 0;
}
