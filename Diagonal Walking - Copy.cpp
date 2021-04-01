#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    char a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    a[n]=NULL;
    for(int i=0; i<n; i++)
    {
        if((a[i]=='U'&&a[i+1]=='R')||(a[i]=='R'&&a[i+1]=='U'))
        {
            c++;
            i++;
        }
        else
            c++;
    }
    cout<<c<<endl;
}
