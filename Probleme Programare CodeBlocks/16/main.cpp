#include <iostream>

using namespace std;

int main()
{
    int n,x,v[101],i,j;
    cin>>n>>x;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=1;i<=n;i++)
    {
        if(v[i]%2==0)
        {
            n++;
            for(j=n-1;j>i;j--)
                v[j+1]=v[j];
            v[i+1]=x;
        }
    }
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
    return 0;
}
