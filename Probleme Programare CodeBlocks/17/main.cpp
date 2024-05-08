#include <iostream>

using namespace std;

int main()
{
    int n,v[101],i,p=0,u=0,s=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
        if(p==0 && v[i]%2==0)
            p=i;
        if(v[i]%2==0)
            u=i;
    }
    for(i=p;i<=u;i++)
        s=s+v[i];
    cout<<s;
    return 0;
}
