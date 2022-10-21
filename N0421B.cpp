#include<bits/stdc++.h>
using namespace std;
long long n,a[1000001],D[1000001],d,t;
int main ()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        D[a[i]]++;
    }
    for(int i=1;i<=n;i++)
        t=t+D[i]/i;
     cout<<t;
}

