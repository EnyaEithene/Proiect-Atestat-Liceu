#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("Atestat.in");
ofstream fout("Factor.out");

int main()
{
    unsigned f,n,p,k;
    while(fin>>n)
    {
        k=0;
        f=2;
        p=0;
        while(n>1 && k==0)
        {
            while(n%f==0)
            {
                n=n/f;
                p++;
            }
            if(p>0)
            {
                k=1;
                fout<<f<<" "<<p;
                fout<<endl;
            }
            f++;p=0;
        }
    }
    fin.close();
    fout.close();
    return 0;
}
