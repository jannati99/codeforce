#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    int x=0,c=1;
    for(int i=0; i<n-1; i++)
    {
        if(a[i]==a[i+1]&&a[i]!=0)
            c++;
        else
            c=1;
        if(c==2)
        {
            x++;
        }
        if(c>2)
        {
            cout<<-1<<endl;
            k=1;
            break;
        }
    }
    if(k==0)
        cout<<x<<endl;
    return 0;
}
