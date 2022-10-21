#include<bits/stdc++.h>
using namespace std;
long long n,a[1000001],D[1000001],d;
int main ()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        D[a[i]]++;
    }
     for(int x=0;x<=120;x++)
        if(D[x]>0) d++;
     cout<<d;
}
