#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    string a;
    cin>>tc;
    while(tc--)
    {
        cin>>a;
        int len=a.size();
        for(int i=0; i<len; i=i+2)
            cout<<a[i];
        cout<<" ";
        for(int i=1; i<len; i=i+2)
            cout<<a[i];
        cout<<endl;
    }
    return 0;
}
