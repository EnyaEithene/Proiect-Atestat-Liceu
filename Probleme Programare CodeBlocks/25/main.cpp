#include <iostream>

using namespace std;

int main()
{
    int m,n,k,a,b,c;
    cin>>n>>m;
    if(n==1&&m==1)
        cout<<"1";
    else
        if(n==1&&m==2)
            cout<<"1 1";
        else
            if(n==2&&m==1)
                cout<<"1"<<endl<<"1";
            else
            {
                k=2;
                a=1;
                b=1;
                cout<<"1 1 ";
                while(k<n*m)
                {
                    c=a+b;
                    b=a;
                    a=c;
                    if(c%2!=0)
                    {
                        cout<<c<<" ";

                        if((k+1)%n==0)
                            cout<<endl;
                        k++;
                    }
                }
            }
    return 0;
}
