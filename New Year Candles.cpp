#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x=0;
    cin>>a>>b;
    int p=a;
    while(a/b!=0)
    {
        x=x+(a/b);
        int y=a%b;
        a=(a/b)+y;
    }
    cout<<p+x<<endl;
    return 0;
}
