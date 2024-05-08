#include <iostream>

using namespace std;

int main()
{
    int n,s,k;;
    cin>>n;
    while(n!=0)
    {
        s=0;k=0;
        if(n<0)
            n=-n;
        if(n<2)
            cout<<0<<" ";
        else
            for(int d=2;d<=n;d++)
        {
            if(n%d==0 && d%2==0)
            {
                s=s+d;
                k++;
            }
        }
        if(s==0)
            cout<<0<<" ";
        else

            {
                cout<<float(s)/k<<" ";
            }
        cin>>n;
    }
    return 0;
}
