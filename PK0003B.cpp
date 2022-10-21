#include<bits/stdc++.h>
using namespace std;
long long n,maxx=-1e10,a[100001],minn=1e10,s;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        if(a[i]>maxx)
        maxx=a[i];
    for(int i=1;i<=n;i++)
        if(a[i]<minn)
        minn=a[i];
    s=maxx-minn;
    cout<<s;

}
