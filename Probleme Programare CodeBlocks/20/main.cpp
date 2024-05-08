#include <iostream>
using namespace std;
int main()
{
    int n,i,x[101],maxim=0,k=0,aux,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x[i];
        if(maxim < x[i])
        {
            maxim = x[i];
            k = i;
        }
    }
    for(i=1;i<k-1;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(x[i]>x[j])
            {
                aux=x[i];
                x[i]=x[j];
                x[j]=aux;
            }
        }
    }
    for(i=k+1;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(x[i]<x[j])
            {
                aux=x[i];
                x[i]=x[j];
                x[j]=aux;
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        cout<<x[i]<<" ";
    }
    return 0;
}

