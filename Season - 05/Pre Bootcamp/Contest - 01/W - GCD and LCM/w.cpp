#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        long long int a, b;
        cin >> a >> b;
        long long int gcd = __gcd(a,b);
        long long int lcm = (a/gcd)*b;
        cout <<gcd << " " << lcm << endl;

    }
    return 0;
}
