#include<iostream>
#include<set>

using namespace std;

int main()
{
    int n;

    while(cin>>n)
    {
        set <int> s;
        while(n--)
        {
            int x,y;
            cin >> y >> x;

            if(y == 1)
                s.insert(x);
            if(y == 2)
                s.erase(x);

            if(y == 3)
            {
                set <int> :: iterator itr = s.find(x);
                if(itr == s.end())
                    cout << "No"<<endl;
                else
                    cout << "Yes" << endl;
            }
        }
    }
    return 0;
}
