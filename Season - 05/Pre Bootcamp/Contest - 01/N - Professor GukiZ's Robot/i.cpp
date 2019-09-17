#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x1, x2;
    int y1, y2;
    while(cin >> x1 >> y1 >> x2 >> y2)
    {
        int xGap, yGap;
        xGap = abs(x1 - x2);
        yGap = abs(y1 - y2);
        int maximum = max(xGap, yGap);
        cout << maximum << endl;
    }
    return 0;
}
