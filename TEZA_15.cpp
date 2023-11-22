#include <iostream>
#include <bits/stdc++.h>
using namespace std;
ifstream f("date.in");
//char s[100],a[100];
int n,a[100];

void problema1_15()
{
    char s[20],a[20],n,ogl[20];
    cin>>s;
    n=strlen(s);
    strcpy(a,strrev(s));
    strrev(s);
    for(int i=1;i<=n;i++)
    {
        strcpy(ogl,strrev(s));
        strrev(s);
        if(strcmp(s,ogl)==0)
        {
            cout<<s;
            break;
        }
        strcpy(s+n,a+(n-i));
    }
}

void problema2_15(int n,int a[100])
{
    for(int i=1; i<n; i++)
        if(a[i]==a[i+1])
        {
            for(int j=i+1; j<=n; j++)
            {
                a[j]=a[j+1];
            }
            n--;
            i--;

        }
    for(int i=1; i<=n; i++)
        cout<<a[i]<<" ";

}

void problema3_15()
{
    int maxim=0;
    for(int i=2; i<=n; i++)
        if(a[i]<a[i-1] && a[i]<a[i+1])
        {
            maxim=1;
            int k1=i,k2=i;
            int st=i-1;
            int dr=i+1;
            while(a[k1]<a[st] && a[k2]<a[dr])
            {
                k1=st;
                k2=dr;
                st--;
                dr++;
                maxim=maxim+2;
            }
             if(nr<=maxim)
                if(nr==maxim)
                    num++;
                else
                {
                    nr=maxim;
                    num=1;
                }
            i=dr;


        }
        if(num)
               cout<<nr<<" "<<num;
            else cout<<"Nu exista";
        }
    cout<<maxim;

}
int main()
{

    f>>n;
    for(int i=1; i<=n; i++)
        f>>a[i];
    problema3_15();
    return 0;
}
