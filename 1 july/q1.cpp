#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2;
    v1.push_back(8);
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(2);
    v1.push_back(3);
    int i,c=0,j;
    for(i=0;i<v1.size();i++)
    {
        c=0;
        for(j=0;j<v1.size();j++)
        {
            if(v1[i]>v1[j])
            {
                c++;
            }
        }
        v2.push_back(c);
    }
    for(i=0;i<v2.size();i++)
    {
        cout<<v2[i];
    }
}