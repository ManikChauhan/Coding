#include <iostream>
using namespace std;
int main()
{
    int i,sum=0,x,n,m,cust=0,j,max = 0;
    cout<<"Enter the dimension of matrix";
    cin>>n>>m;
    int a[n][m];
    cout<<"Enter the elements";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            sum+=a[i][j];
        }
        if(sum>max)
        {
            max  = sum;
            cust = i+1;
        }
    }
    cout<<"Customer "<<cust<<" has most money";
}