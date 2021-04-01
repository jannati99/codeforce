#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long int n,p=0;
        cin>>n;
        if(n%2==0)
        {
            int x=n/2;
            while(x>=2)
            {
                if(x%2!=0)
                {
                    cout<<"YES"<<endl;
                    p=1;
                    break;
                }
               if(x%2==0)
                x=x/2;
               else
                cout<<"YES"<<endl;
            }
            if(p==0)
                    cout<<"NO"<<endl;
        }
        else
            cout<<"YES"<<endl;
    }
        return 0;
    }
