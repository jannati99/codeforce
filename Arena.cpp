#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n);
        int x=0,c=0;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(a[i]<a[j])
                    c++;
            }
           if(x<c)
            x=c;
            c=0;
        }
      cout<<x<<endl;
    }
    return 0;
}
