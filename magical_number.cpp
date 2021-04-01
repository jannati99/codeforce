#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c=0,x=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
            c=0;
            continue;
        }
        if(s[i]=='4'&&i==0)
        {
           cout<<"NO"<<endl;
           x=1;
           break;
        }
        if(s[i]=='4'&&i!=0)
            c++;
        if(c>2)
        {
            cout<<"NO"<<endl;
            x=1;
            break;
        }
        if(s[i]!='1'&&s[i]!='4')
        {
            cout<<"NO"<<endl;
            x=1;
            break;
        }

    }
    if(x==0)
        cout<<"YES"<<endl;

    return 0;

}
