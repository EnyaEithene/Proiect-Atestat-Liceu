#include <iostream>

using namespace std;

int main()
{
    int n,v[101],i,j;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=1;i<=n;i++)
        if(v[i]%2==0)
        {
            for(j=i;j<n;j++)
                v[j]=v[j+1];
            n--;
            i--;
        }
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
    return 0;
}
