#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,m=0,x=0,j;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    cin>>q;
    int b[q];
    for(int i=0; i<q; i++)
        cin>>b[i];
    sort(b,b+q);
    for(int i=0;i<q;i++)
    {
        int c=0;
        for(j=m;j<n;j++)
        {
            if(a[j]<=b[i])
                c++;
            else
                break;
        }
        m=j;
        x=x+c;
        cout<<x<<endl;
    }
return 0;
}
