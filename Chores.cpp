#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,b;
    cin>>n>>x>>b;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int y=a[b]-a[b-1];
    cout<<y<<endl;
    return 0;
}
