#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("matrice.in");

int main()
{
    int n,m,i,j,c,v[101][101];
    fin>>n>>m;
    c=1;
    for(i=1;i<=n;i++)
        for(j=i;j<=m;j++)
        {
            fin>>v[i][j];
            if(j==(m/2)+1 && v[i][j]%2==0)
                c=0;
        }
    if(c==1)
        cout<<"DA";
    else
        cout<<"NU";
    fin.close();
    return 0;
}
