#include <iostream>

using namespace std;

int main()
{
    int i,n,a,b,c,iso=0,echi=0,drept=0,oare=0,ip,c1,c2;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b>>c;
        if(a>0 && b>0 && c>0)
        {
            if(a==b && b==c)
                echi++;
            if(a==b && a!=c)
                iso++;
            else
                if(a==c && a!=b)
                    iso++;
                    else
                        if(b==c && b!=a)
                            iso++;

            if(a!=b && b!=c && a!=c)
             {
                if(a>b && a>c)
                {
                    ip=a;
                    c1=b;
                    c2=c;
                }
                else
                if(b>a && b>c)
                {
                    ip=b;
                    c1=a;
                    c2=c;

                }
                else
                if(c>a && c>b)
                {
                    ip=c;
                    c1=a;
                    c2=b;

                }
                if(ip*ip==c1*c1+c2*c2)
                    drept++;
                    else
                        oare++;
             }


        }

    }
    if(echi==1)
        cout<<"1 triunghi echilateral"<<endl;
    if(iso==1)
        cout<<"1 triunghi isoscel"<<endl;
    if(drept==1)
        cout<<"1 triunghi dreptunghic"<<endl;
    if(oare==1)
        cout<<"1 triunghi oarecare"<<endl;
    if(echi==0 && iso==0 && drept==0 && oare==0)
        cout<<"NU EXISTA TRIUNGHIURI";
    if(echi>1)
        cout<<echi<<" triunghiuri echilaterale"<<endl;
    if(iso>1)
        cout<<iso<<" triunghiuri isoscele"<<endl;
    if(drept>1)
        cout<<drept<<" triunghiuri dreptunghice"<<endl;
    if(oare>1)
        cout<<oare<<" triunghiuri oarecare"<<endl;
    return 0;
}
