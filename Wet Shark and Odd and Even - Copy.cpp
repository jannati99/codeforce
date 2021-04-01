#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,e=0,o=0,c=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%2!=0)
            o++;
    }
    sort(a,a+n);
    if(o%2==0)
    {
        for(int i=0; i<n; i++)
        {
            c=c+a[i];
        }
        cout<<c<<endl;
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            if(a[i]%2!=0&&e==0)
            {
                e=1;
            }
            else
                c=c+a[i];
        }
        cout<<c<<endl;
    }
    return 0;
}

