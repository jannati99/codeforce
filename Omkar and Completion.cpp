#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            a[i]=5;
        for(int i=0;i<n;i++)
        {
            if(i!=n-1)
                cout<<a[i]<<" ";
            else
                cout<<a[i]<<endl;
        }

    }
    return 0;
}
