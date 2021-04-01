#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t=1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    if(n==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        sort(a,a+n);
        for(int i=1;i<n;i++)
        {
            if(a[i]>a[0])
            {
                cout<<a[i]<<endl;
                t=0;
                break;
            }
        }
        if(t==1)
            cout<<"NO"<<endl;
    }
    return 0;
}
