#include <iostream>

using namespace std;

int main()
{
    unsigned n,nr,sm=0,k=0,i,d;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>nr;
        unsigned s=1;
        for(d=2;d<=nr/2;d++)
            if(nr%d==0)
            s=s+d;
        if(s==nr)
        {
            sm=sm+nr;
            k++;
        }
    }
    if(sm==0)
        cout<<"NU EXISTA";
    else
        cout<<sm/k;
    return 0;
}
