#include<iostream>
#include<map>
#include<cstdio>
#include<string>

using namespace std;

int main()
{
    int n;
    map<string,string> mp;
    map<string,string> :: iterator it;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        string first_line,second_line;
        getline(cin,first_line);
        getline(cin,second_line);
        mp.insert(pair<string,string>(first_line,second_line));
    }
    int a;
    cin>>a;
    cin.ignore();
    while(a--)
    {
        string c;
        getline(cin,c);
        cout<<mp[c]<<endl;
    }
    return 0;
}
