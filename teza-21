#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a[40][40],ok,nr=0;
    float s=0;
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        cin>>a[i][j];
    for(int i=0;i<n;i++)
        {
            ok=0;
            for(int j=0;j<n-1;j++)
            if(a[j][i]>=a[j+1][i])
                ok=1;
            if(ok==0)
                {
                    cout<<a[0][i]<<endl;
                    s=s+a[0][i];
                    nr++;
                }
        }
        //ma=s/nr;
        if(s==0)
        cout<<"Nu exista coloane ordonate strict crescator";
        else cout<<s/nr;
        
        
        
        int n,m,t,x=1,y=1,s,a;
    cin>>n;
    while(m<n )
    {
        s=x+y;
        cout<<x<<"+"<<y<<"="<<s<<endl;
        a=x;
        x=y;
        y=s;
        m=y;
    }
    t=m-a;
    cout<<t<<" "<<m;
    
    int n,x,v,y,k=0,z,ok=0;
    cin>>n>>x>>y;
    for(int i=3;i<=n;i++)
    {
        cin>>z;
        if(y>x && y>z) 
        {ok=1;
        a[y]++;}
        x=y;
        y=z;

    }
    if(ok==0)
        cout<<"nu exista";
    else 
        for(int i=0;i<=1000;i++)
            if(a[i])
        cout<<i<<" ";
    return 0;
}
