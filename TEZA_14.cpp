#include <iostream>
#include <bits/stdc++.h>

using namespace std;
ifstream f("date.in");
int k=1,v[100];
void problema2_14(int n)
{
    while(n!=1)
    {
        if(n%5==0)
        {
            k=5*k;
            n/=5;
        }
        else if(n%3==0)
        {

            k=3*k;
            n/=3;
        }
        else
        {
            k*=2;
            n/=2;
        }
    }
    cout<<k;



}

void problema3_14(int n)
{
    int x;
    int k=0;
    while(f>>x)
        v[x]++;
    for(int i=0;i<=99;i++)
    {
        k=v[i]+k;
        if(k>=n)
        {
            cout<<i;
            break;
        }
    }

}

int main()
{
    problema3_14(6);
    return 0;
}
