#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        double len, wid, rad, circleAR, squareAR;
        cin >> len;
        wid = 0.6 * len;
        rad = 0.2 * len;
        circleAR = acos(-1) * rad * rad;
        squareAR = (len*wid) - circleAR;
        printf("%0.2lf %0.2lf\n",circleAR, squareAR); 
    }
    return 0;
}
