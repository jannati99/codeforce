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
                k=a[i];
            }
            else if(a[i]!=a[i+1])
            {
                cout<<k<<endl;
                for(int w=0; w<n; w++)
                {
                    if(k==a[w])
                    {
                        p++;
                    }
                }
            }
            cout<<c<<endl;
            cout<<p<<endl;
            if(p!=c)
            {
                cout<<"NO"<<endl;
                s=1;
                break;

            }
            c=1,p=0;
        }
        if(s==0)
            cout<<"YES"<<endl;
    }
    return 0;

}
