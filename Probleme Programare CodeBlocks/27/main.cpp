#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[51],i,cmax;
    unsigned kmax=0,k,j,ok=0;
    cin.get(s,51);
    for(i='0';i<='9';i++)
    {
        k=0;
        for(j=0;j<strlen(s);j++)
            if(s[j]==i)
        {
            k++;
            ok=1;
        }
        if(k>kmax)
        {
            kmax=k;
            cmax=i;
        }
    }
    if(ok==0)
        cout<<"Nu exista";
    else
        cout<<cmax;
    return 0;
}

