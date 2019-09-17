#include<iostream>
#include<map>

using namespace std;

int main()
{
    int que;
    map <string,int> mp;
    map <string,int> :: iterator it;
    map <string,int> :: iterator itr;
    while(cin>>que)
    {
        for(int i = 0; i < que; i++)
        {
            int type,number;
            string name;
            cin>>type;
            cin>>name;
            switch(type)
            {
                case 1 :
                    cin>>number;
                    if(mp.find(name) == mp.end())
                        mp.insert(pair<string,int>(name,number));

                    else
                        {
                            int x = mp[name]+number;
                            mp[name]=x; /// this is map operator [] function. it replaces the previous value of the same key with the new value;
                        }
                    break;

                case 2 :
                    mp.erase(name);
                    break;

                case 3 :
                    it = mp.find(name);
                    if(it != mp.end())
                        cout<<it->second<<endl;
                    else
                        cout<<"0"<<endl;
                    break;
            }
        }
    }

    return 0;
}
