#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,p=1;
    cin>>n>>a>>b;
    int x[a],y[b],c[n];
    for(int i=1;i<=n;i++)
        c[i]=2;
    for(int i=0;i<a;i++)
        cin>>x[i];
    for(int i=0;i<b;i++)
        cin>>y[i];
        sort(x,x+a);
    for(int i=0;i<=a;i++)
    {
        for(int j=p;j<=n;j++)
        {
            if(j==x[i])
            {
                c[j]=1;
               break;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(i!=n)
        {
            if(c[i]==1)
                cout<<1<<" ";

            else
                cout<<2<<" ";
        }
        else
        {
            if(c[i]==1)
                cout<<1<<" ";

            else
                cout<<2<<" ";
        }
    }
   return 0;
}
