#include <iostream>

using namespace std;

int main()
{
    int n,i,a,b,maxx,ok=0,minn;
    long nr,nr1,s=0;

    cin>>a>>b;
    if(a>b)
    {
        minn=b;
        maxx=a;
    }
    else
    {
        minn=a;
        maxx=b;
    }
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>nr;
        nr1=nr;
        while(nr1!=0)
        {
            s=s+nr1%10;
            nr1=nr1/10;
        }
        if(s<maxx && s>minn)
            ok++;
        s=0;
    }
    if(ok!=0)
        cout<<ok;
    else
        cout<<"NU EXISTA";
    return 0;
}
