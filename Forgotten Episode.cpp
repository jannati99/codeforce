#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n-1;i++)
        cin>>a[i];
    sort(a,a+(n-1));
    int k=1,p=0;
    for(int i=0;i<n-1;i++)
    {
        if(k==a[i])
        {
           k++;
            continue;
        }
        else
        {
            cout<<k<<endl;
            p=1;
            break;
        }
    }
    if(p==0)
        cout<<k<<endl;
    return 0;
}
