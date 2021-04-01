#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n],c=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]<a[j])
                c++;
        }
        b[i]=c+1;
        c=0;
    }
    for(int i=0;i<n;i++)
    {
        if(i!=n-1)
        cout<<b[i]<<" ";
        else
            cout<<b[i]<<endl;
    }
   return 0;
}
