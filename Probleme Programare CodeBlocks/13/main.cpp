#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("vector.in");
ofstream fout("vector.out");

int v[101],n,i,k=0,ok,d;

int main()
{
    fin>>n;
    for(i=1;i<=n;i++)
        fin>>v[i];
    for(i=1;i<=n;i++)
    {
        ok=1;
        if(v[i]==0||v[i]==1)
            ok=0;
        else
         for(d=2;d*d<=v[i];d++)
           if(v[i]%d==0)
             ok=0;
        if(ok==1)
            k++;
    }
    if(k!=0)
        fout<<"DA";
    else
        fout<<"NU";
    fin.close();
    fout.close();
    return 0;
}
