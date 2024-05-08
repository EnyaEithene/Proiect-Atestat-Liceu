#include <iostream>

using namespace std;

int main()
{
    int n,a,b,r,cmmdc=0,i;
    cin>>n;
    cin>>a>>b;
    if(a==0 || b==0)
        cmmdc=0;
    else
    {
        r=a%b;
        while(r!=0)
        {
            a=b;
            b=r;
            r=a%b;
        }
        cmmdc=b;
    }
    a=cmmdc;
    for(i=3;i<=n;i++)
    {
        cin>>b;
        if(a==0 || b==0)
            cmmdc=0;
        else
        {
            r=a%b;
            while(r!=0)
            {
                a=b;
                b=r;
                r=a%b;
            }
            a=b;
        }

    }
    cout<<a;
    return 0;
}
