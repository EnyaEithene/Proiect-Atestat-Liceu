#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[101],*p,c[101]="";
    unsigned ok=0;
    cin.get(s,101);
    p=strtok(s," ");
    while(p!=0)
    {
        if(p[0]==p[strlen(p)-1] || p[0]==p[strlen(p)-1]+32 || p[0]==p[strlen(p)-1]-32)
            ok=1;
        else
        {
            strcat(c,p);
            strcat(c," ");
        }
        p=strtok(NULL," ");
    }
    strcpy(s,c);
    if(ok==0)
        cout<<"Nu exista";
    else
        cout<<s;
    return 0;
}
