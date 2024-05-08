#include <iostream>

using namespace std;

int main()
{
    unsigned n,nr,i,nr1,minn,maxx,kmax,kmin;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>nr;
        nr1=nr;
        minn=9;
        maxx=0;
        kmax=0;
        kmin=0;
        while(nr1!=0)
        {
            if(nr1%10>maxx)
                maxx=nr1%10;
            if(nr1%10<minn)
                minn=nr1%10;
            nr1=nr1/10;
        }
        if(maxx==minn)
        {
            cout<<"cifre egale";
            cout<<endl;
        }
        else
        {
            while(nr!=0)
            {
                if(nr%10==maxx)
                    kmax++;
                if(nr%10==minn)
                    kmin++;
                nr=nr/10;
            }
        }
        if(maxx!=minn)
        {
            cout<<"cifra maxima "<<maxx<<" numar de aparitii "<<kmax<<",cifra minima "<<minn<<" numar de aparitii "<<kmin;
            cout<<endl;
        }
    }
    return 0;
}
