#include <iostream>
#include <fstream>

using namespace std;

ofstream fout("vector.out");

int main()
{
    int n,k,v[101],i,j,aux;
    cin>>n>>k;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=1;i<k;i++)
        for(j=i+1;j<=k;j++)
            if(v[i]>v[j])
            {
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
    for(i=k+1;i<n;i++)
        for(j=i+1;j<=n;j++)
            if(v[i]<v[j])
            {
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
    for(i=1;i<=n;i++)
        fout<<v[i]<<" ";
    return 0;
}
