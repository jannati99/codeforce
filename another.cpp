#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc,n;
    char a[50];
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>a[i];
        a[n]='1';
        int c=1,p=0,s=0;
        char k;
        for(int i=0; i<n; i++)
        {
            if(a[i]==a[i+1])
            {

                c++;
            }
            else
            {
                k=a[i];
             //   cout<<k<<endl;
                for(int x=0; x<n; x++)
                {
                    if(k==a[x])
                        p++;
                }
             //   cout<<c<<endl;
             //   cout<<p<<endl;
                if(c!=p)
                {
                    cout<<"NO"<<endl;
                    s=1;
                    break;
                }
                c=1;
                p=0;
            }

        }
        if(s==0)
            cout<<"YES"<<endl;
    }
    return 0;

}

