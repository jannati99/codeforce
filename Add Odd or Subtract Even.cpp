#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,tc,sub;
    cin>>tc;
    while(tc--)
    {
        cin>>a>>b;
        sub=b-a;
        if(sub>0)
        {
           if(sub%2==0)
                cout<<2<<endl;
           else
            cout<<1<<endl;

        }
        else if(sub<0)
        {
            if((a-b)%2==0)
                cout<<1<<endl;
           else
            cout<<2<<endl;
        }
        else
            cout<<0<<endl;
    }
   return 0;
}
