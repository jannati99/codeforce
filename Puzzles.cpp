#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int x;
    int p=a[m-1]-a[0];
    //cout<<p<<endl;
    for(int i=0;i<=n-m;i++)
    {
       x=a[i+m-1]-a[i];

       if(x<=p)
       {
           p=x;
       }
    }
        cout<<p<<endl;
    return 0;

}
