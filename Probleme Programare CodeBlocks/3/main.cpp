#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,mpr=0,mnpr=0,ipr=0,imnpr=0,ok,d;
    cin>>n;
    while(n!=0)
    {
        ok=1;
        if(n==0 || n==1)
            ok=0;
        else
            for(d=2;d<=sqrt(n);d++)
                if(n%d==0)
                    ok=0;
        if(ok==1)
        {
            mpr=mpr+n;
            ipr++;
        }
        else
        {
            mnpr=mnpr+n;
            imnpr++;
        }
        cin>>n;
    }
    cout<<"Media numerelor neprime este "<<mnpr/imnpr<<endl;
    cout<<"Media numerelor prime este "<<mpr/ipr;

    return 0;
}
