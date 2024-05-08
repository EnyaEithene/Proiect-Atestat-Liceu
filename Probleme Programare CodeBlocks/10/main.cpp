#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("Atestat.in");
ofstream fout("Palindrom.out");

int main()
{
    int n,nr,i,k=0,og,x;
    float s=0;
    fin>>n;
    for(i=1;i<=n;i++)
    {
        fin>>nr;
        x=nr;og=0;
        while(x>0)
        {
            og=og*10+x%10;
            x=x/10;
        }
        if(og==nr)
        {
            k++;
            s=s+nr;
        }
    }
    if(k!=0)
        fout<<s/k;
    else
        fout<<"NU EXISTA";
    fin.close();
    fout.close();
    return 0;
}
