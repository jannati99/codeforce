#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int a[n];
    for(int i=1;i<n;i++)
        cin>>a[i];
    int x,y;
    cin>>x>>y;
    for(int i=x;i<y;i++)
        sum=sum+a[i];
    cout<<sum<<endl;
    return 0;
}
