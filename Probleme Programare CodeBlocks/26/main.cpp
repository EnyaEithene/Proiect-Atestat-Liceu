#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int i,j,k;
    char s[100],prim_cuv[100],*p;
    cin>>prim_cuv;
    k=strlen(prim_cuv);
    if(k%2!=0)
        prim_cuv[k/2]=prim_cuv[k/2]-32;
    cin.get(s,100);
    cin.get();

    for(i=0;i<strlen(s)-1; i++)
        if(s[i]==' '&&s[i+1]!=' ')
        {
            j=i+1;
            while(j<strlen(s)&&s[j]!=' ')
                j++;
            if((j-i-1)%2!=0)
                if(s[(j+i)/2]>='a'&&s[(j+i)/2]<='z')
                    s[(j+i)/2]=s[(j+i)/2]-32;
            i=j-1;
        }
    cout<<prim_cuv<<s;
    return 0;
}
