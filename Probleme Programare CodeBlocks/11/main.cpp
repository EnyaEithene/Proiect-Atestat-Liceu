#include <iostream>

using namespace std;

int v[101],a[101],n,i,k=0;

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=1;i<=n;i++)
    {
      if(i%2!=0)
          a[i]=v[i-k];
       if(i%2==0)
       {
           a[i]=v[n-k];
           k++;
       }
    }
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
    return 0;
}
