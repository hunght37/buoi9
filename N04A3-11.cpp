#include<bits/stdc++.h>
using namespace std;
long long n,a[1000001],k,m,c[1000001],b[1000001];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
            if(a[i]%2!=0)
    {
        m++;
        b[m]=a[i];
    }
    for(int i=1;i<=n;i++)
            if(a[i]%2==0)
            {
                k++;
                c[k]=a[i];
            }
            sort(b+1,b+m+1);
     for(int i=1;i<=m;i++)
                cout<<b[i]<<" ";
                cout<<endl;
     sort(c+1,c+k+1,greater<int>());
     for(int i=1;i<=k;i++)
        cout<<c[i]<<" ";

}

