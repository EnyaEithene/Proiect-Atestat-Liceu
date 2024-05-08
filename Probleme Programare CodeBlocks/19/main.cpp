#include <iostream>
#include <fstream>

using namespace std;

ofstream fout("vector.out");

int main()
{
    int n,i,x[101],y[101],z[101];
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x[i];
    }
    for(i=1;i<=n;i++)
    {
        cin>>y[i];
    }
    for(i=1;i<=n;i++)
    {
        z[i]=2*x[i]+y[i]*y[i];
        fout<<z[i]<<" ";
    }
    fout.close();
    return 0;
}

