#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,x=0,y=0,l=100,h=100;
    cin>>m>>n;
    char a[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='*')
            {
                if(i<l)
                    l=i;
                if(j<h)
                    h=j;
                if(x<i)
                    x=i;
                if(y<j)
                    y=j;
            }
        }
    }
    for(int i=l;i<=x;i++)
    {
        for(int j=h;j<=y;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}
