#include <iostream>

using namespace std;

int v[10],i;

int main()
{
    long long n,ok=1;
    cin>>n;
    while(n!=0)
    {
        v[n%10]++;
        n=n/10;
    }
    for(i=0;i<=9;i++)
        if(v[i]>1)
            ok=0;
    if(ok==1)
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
