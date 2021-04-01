#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2,a3,b1,b2,b3,t,x,y,m,n;
    cin>>a1>>a2>>a3>>b1>>b2>>b3>>t;
    x=a1+a2+a3;
    y=b1+b2+b3;
    m=x/5;
    if(x%5!=0)
        m=m+1;
    n=y/10;
    if(y%10!=0)
        n=n+1;
    if(m+n<=t)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
