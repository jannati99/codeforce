#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k=0,sum=0,c=0,b=0,d=0,e=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {

        cin>>a[i];
        if(a[i]==3)
            d++;
        else if(a[i]==1)
            b++;
        else if(a[i]==2)
            c++;
        else
            e++;
    }
 //   cout<<c<<" "<<d<<endl;
    int one=b-d;
    sum=sum+e+d;
    if(c%2==0)
    {
        sum=sum+(c/2);
      //
     //   cout<<sum<<endl;
    }
    else
    {
        if(one<=2)
        {
            sum=sum+(c/2)+1;
            one=0;
        }
        else
        {
            one=one-2;
            sum=sum+(c/2)+1;
        }
    }
    if(one>0)
    {
        if(one%4==0)
            sum=sum+(one/4);
        else
            sum=sum+(one/4)+1;
    }
    cout<<sum<<endl;

    return 0;

}


