#include <iostream>

using namespace std;

int main()
{
    int n,i,j,a[101][101],sum1=0,sum2=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cin>>a[i][j];
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {   if(i==j)
            sum1=sum1+a[i][j];
            if(i+j==n+1)
            sum2=sum2+a[i][j];
        }
    }
    if(sum1>sum2)
        cout<<"Diagonala principala";
    else if(sum1<sum2)
        cout<<"Diagonala secundara";
    else
        cout<<"Sunt egale";
    return 0;
}
