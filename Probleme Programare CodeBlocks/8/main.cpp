#include <iostream>

using namespace std;

int main()
{
    unsigned n,nr,c,k,i,nr1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>nr;k=0;nr1=nr;
        while(nr1!=0)
        {
            c=nr1%2;
            k++;
            nr1=nr1/2;
        }
        cout<<"pentru "<<nr<<" , "<<k<<" cifre binare";
        cout<<endl;
    }
    return 0;
}
