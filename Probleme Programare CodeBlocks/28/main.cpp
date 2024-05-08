#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream fin("text.in");

int main()
{
    char s[100],v[100][100],aux[100];
    unsigned x=0,ok=0,i,j;
    while(fin>>s)
    {
        if(strlen(s)%2!=0)
        {
            x++;
            strcpy(v[x],s);
            ok=1;
        }
    }
    for(i=1;i<=x-1;i++)
        for(j=i+1;j<=x;j++)
        if(strcmp(v[i],v[j])>0)
    {
        strcpy(aux,v[i]);
        strcpy(v[i],v[j]);
        strcpy(v[j],aux);
    }
    if(ok==0)
        cout<<"Nu exista";
    else
        for(i=1;i<=x;i++)
            cout<<v[i]<<" ";
    return 0;
}

