#include <iostream>
#include <fstream>
using namespace std;
ofstream fout("matrice.out");
int main()
{
    int n,m,i,j,a[101][101],aux,k;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            cin>>a[i][j];
    }
    i=1;
    for(j=1;j<m;j++)
    {
        for(k=j+1;k<=m;k++)
        {
            if(a[i][j]>a[i][k])
            {
                aux=a[i][j];
                a[i][j]=a[i][k];
                a[i][k]=aux;
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            fout<<a[i][j]<<" ";
        fout<<endl;
    }
    return 0;
}
