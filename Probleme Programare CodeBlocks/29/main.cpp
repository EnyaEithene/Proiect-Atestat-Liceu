#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[101],*p;
    unsigned k=0,ok,i;
    cin.get(s,101);
    p=strtok(s," ");
    while(p!=0)
    {
        ok=0;
        for(i=0;i<strlen(p)-1 && ok==0;i++)
            if(p[i]==p[i+1])
        {
            k++;
            ok=1;
        }
        p=strtok(NULL," ");
    }
    cout<<k;
    return 0;
}
