
#include <bits/stdc++.h>

using namespace std;
int a[10][10];

int nrcif(int n)
{
    int nr=0;
    while(n)
    {
        nr++;
        n/=10;
    }
    return nr;
}

int main()
{
    int n,maxx=0;
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        cin>>a[i][j];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        if(i==j || i+j==n-1)
        if(maxx<a[i][j] && a[i][j]%2==1)
        maxx=a[i][j];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        if(a[i][j]%2==0 && nrcif(a[i][j])<=3)
        a[i][j]=maxx;
    for(int i=0;i<n;i++)
        {
        for(int j=0;j<n;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
            
        }
int n, k=-1,fr[9]={0},copie,x=0,y=0,cn;
    cin>>n;
    copie=0;
    cn=n;
    while(n)
    {
        copie=copie*10+n%10;
        n/=10;
    }
    
    while(copie)
    {
        if(copie%10%2==0 && fr[copie%10]==0)
            {
                x=x*10+copie%10;
                fr[copie%10]=1;
            }
        else if(copie%10%2==1)
            y=y*10+copie%10;
        copie/=10;
    }
    if(k!=-1)
    cout<<x<<" "<<y;
    else cout<<cn<<" "<<k;


  int fr[6]={0},k,n=19;
    char x,y;
    while(n)//f>>x)
    {
        cin>>x;
        if(isupper(x))
        fr[x-'A'+1]++;
        else fr[x-'a'+1]++;
        n--;
    }
    for(int i=1;i<=6;i++)
    cout<<fr[i]<<" ";
    cout<<endl;
    for(int i=1;i<=6;i++)
        if(fr[i]%2==1)
        while(fr[i])
        {
            y=i+'a'-1;
            cout<<y;
            fr[i]--;
        }

  
    return 0;
}
