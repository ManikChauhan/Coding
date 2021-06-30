#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,2,3,1,1,3};
    int b=0;
    int n=sizeof(a)/sizeof(int);
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j] &&i<j)
                c++;
        }
    }
    cout<<b;
    return 0;
}