#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c=0,x=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='4'||s[i]=='7')
            c++;
    }
    if(c==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
         while(c>0)
    {
        if(c%10==4||c%10==7)
        {
            x=0;
        }
        else
        {
            x=1;
            cout<<"NO"<<endl;
            break;
        }
        c=c/10;
    }
    if(x==0)
        cout<<"YES"<<endl;
    }

    return 0;
}
