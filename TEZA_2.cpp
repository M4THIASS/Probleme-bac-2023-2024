#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int i,j;

int divizori(int n)
{
    int nrdiv = 0;
    for(int d=1; d<=n; d++)
    {
        if(n%d == 0)
        {
            nrdiv++;
        }
    }
    return nrdiv;

}

void citire()
{
    cin>>a>>b;
    if(b<a)
    {
        aux=a;
        a=b;
        b=aux;
    }
    while(a<=b)
    {
        nr=divizori(a);
        if(nr==3)
            nrr++;
        a++;
    }
   cout<<nrr;
}


int main()
{
    char s[100];
    cin.get(s,101);
    int n=strlen(s);

    //stergere spatii;
    for(i=0; i<n; i++)
    {
        if(s[i]==' ')
        {
            strcpy(s+i,s+i+1);
            n--;
        }
    }
    int m=strlen(s);

    //sortare
    for(i=0; i<m; i++)
        for(j=0; j<m-1; j++)
            if(s[j+1]<s[j])
            {
                char aux;
                aux=s[j];
                s[j]=s[j+1];
                s[j+1]=aux;
            }
    cout<<s<<endl;

    //aflare numarul maxim de aparitie a unei litere
    char copie;
    copie=s[0];
    int maxx=0, nr=0;

    for(i=0; i<m; i++)
    {
        if(s[i]==copie)
            nr++;
        if(maxx<nr)
            maxx=nr;
        if(s[i]!=copie)
        {
            copie=s[i];
            nr=1;

        }

    }
    cout<<"Litera X apare de cele mai multe ori in propozitie, si anume de - "<<maxx<<endl;

    //afla litera care apare de maxx ori
    char copi;
    int nrr=0;
    copi=s[0];
    for(i=0; i<m; i++)
    {
        if(s[i]==copi)
            nrr++;
        if(s[i]!=copi)
        {
            if(nrr==maxx)
                cout<<"Lietra care apare de "<<maxx<<" ori este : "<<s[i-1]<<endl;
            copi=s[i];
            nrr=1;
        }

    }

    return 0;
}



oid creare_vector_de_frecventa()
{
    for(i=0; i<n; i++)
    {
        x=a[i];
        frA[x]++;
    }
    cout<<"vectorul de frecventa pt a este : ";
    for(i=0; i<10; i++)
        cout<<frA[i]<<" ";
    cout<<"... si asa mai departe"<<endl;

    for(i=0; i<m; i++)
    {
        x=b[i];
        frB[x]++;
    }
    cout<<"vectorul de frecventa pt b este : ";
    for(i=0; i<10; i++)
        cout<<frB[i]<<" ";
    cout<<" ... si asa mai departe"<<endl;

}

int main()
{

    citire();
    afisare();
    creare_vector_de_frecventa();
    int aux=0;
    for(i=0; i<999999; i++)
    {
        if(frB[i]!=0)
        {
            if(aux==0 || frA[i]/frB[i]<aux)
                aux=frA[i]/frB[i];
        }
    }
    cout<<aux;

    return 0;
}
