#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
   if(a[0]==0)
    r=0;
   else
    r=1;
   for(int i=1;i<=n-1;i++)
   {
       if(a[i]==0)
        continue;
       if(a[i]!=a[i-1])
        r++;
   }
   cout<<r<<endl;
    return 0;
}
