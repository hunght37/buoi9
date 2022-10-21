#include<bits/stdc++.h>
using namespace std;
long long n,a[1000001];
int main()
{
    cin>>n;
    for(int i=1;i<=2*n;i++)
        cin>>a[i];
    sort(a+1,a+2*n+1);
   for(int i=1;i<=2*n;i++)
        cout<<a[i]<<" ";
}
