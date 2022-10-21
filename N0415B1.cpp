#include<bits/stdc++.h>
using namespace std;
long long n,a[1000001],D[1000001],d,maxx=-1e10;
int main ()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        D[a[i]]++;
    }
      for(int i=1;i<=n;i++)
        if(D[a[i]]>maxx)
            maxx=D[a[i]];
     cout<<maxx;
}

