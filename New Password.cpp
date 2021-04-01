#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    char a=97;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<k; j++)
        {
            if(i<n)
                cout<<a;
            else
                    break;
            a++;
            i++;
        }
        i=i-1;
        a=97;
    }
    cout<<endl;
    return 0;
}
