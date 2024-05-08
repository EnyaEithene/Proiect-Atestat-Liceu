#include <iostream>

using namespace std;

int v[101],n,i,k=0,minn,maxx;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    minn=v[1];maxx=v[1];
    for(i=2;i<=n;i++)
    {
      if(v[i]>maxx)
        maxx=v[i];
      if(v[i]<minn)
          minn=v[i];
    }
    for(i=1;i<=n;i++)
        if(v[i]==minn+maxx)
          k++;
    if(k!=0)
     cout<<k;
    else
        cout<<"Nu exista";
    return 0;
}
