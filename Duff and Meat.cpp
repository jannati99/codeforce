#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,sum=0;
    cin>>n;
    long long int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    sum=sum+(a[0]*b[0]);
    int k=b[0];
  //  cout<<sum<<endl;
    for(int i=1;i<n;i++)
    {
        if(k<=b[i])
        {
          //  cout<<sum<<endl;
             sum=sum+(a[i]*k);
        }
        else
        {
            k=b[i];
            sum=sum+(a[i]*k);
        }

    }
    cout<<sum<<endl;
    return 0;
}
