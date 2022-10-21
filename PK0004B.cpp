#include<bits/stdc++.h>
using namespace std;
long long n,minn=1e10,a[100001];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    for(int i=2;i<=n;i++)
        if(a[i]-a[i-1]<minn)
        minn=a[i]-a[i-1];
    cout<<minn;
}
