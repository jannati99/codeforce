#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(n%m==0)
    {
        for(int i=0; i<m; i++)
            if(i!=m-1)
                cout<<n/m<<" ";
            else
                cout<<n/m<<endl;
    }
    else
    {
       for(int i=1;i<=m;i++)
       {
           int x=n%m;
           if(i<=x)
            cout<<(n/m)+1<<" ";
           else if(i>x&&i!=m)
            cout<<(n/m)<<" ";
           else
            cout<<n/m<<endl;
       }
    }
    return 0;
}
