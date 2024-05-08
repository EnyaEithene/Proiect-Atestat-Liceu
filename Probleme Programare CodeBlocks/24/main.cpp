#include <iostream>

using namespace std;

int main()
{
    int v[101][101],n,i,j,s;
    cin>>n;
    s=1;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        {
            if(i%2!=0)
                v[i][j]=s;
            else
                v[i][n-j+1]=s;
            s=s+2;
        }
    for(j=1;j<=n;j++)
    {
        for(i=1;i<=n;i++)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
