#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v1;
    vector<char> v2;
    vector<pair<int,char> > mp;
    int i;
    v1.push_back(2);
    v1.push_back(1);
    v1.push_back(0);
    v2.push_back('a');
    v2.push_back('b');
    v2.push_back('c');
    for(i=0;i<v1.size();i++)
    {
        mp.push_back( make_pair(v1[i],v2[i]));
    }
    sort(mp.begin(),mp.end());
    for(i=0;i<mp.size();i++)
    {
        cout<<mp[i].second;
    }
}