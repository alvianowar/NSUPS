#include <iostream>

using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {

        int a, b, sum = 0;
        cin >> a;
        b = a % 10;
        a = a / 10;
        sum += b;
        while(a)
        {
            b = a % 10;
            a = a / 10;
        }
        sum += b;

        cout << sum << endl;
    }
    return 0;
}
