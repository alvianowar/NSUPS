#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    int n, k, l, c, d, p, nl, np;
    while(cin >> n >> k >> l >> c >> d >> p >> nl >> np)
    {
        int totalL = k*l;
        int slice = c * d;
        int neededL = n * nl;
        int neededSlice = n;
        int neededSalt = n*np;
        int L, Salt, Slic;
        L = totalL / neededL;
        Salt = p / neededSalt;
        Slic = slice / neededSlice;
        int minimum = min(L,min(Salt,Slic));
        cout << minimum << endl;
    }


    return 0;
}
