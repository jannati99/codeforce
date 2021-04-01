#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100000];
    gets(a);
    int c=0;
    int len=strlen(a);
    sort(a,a+len);
    for(int i=0;i<len;i++)
    {
         if(a[i]>=97&&a[i]<=122)
         {
             if(a[i]!=a[i-1])
                c++;
         }
    }
    cout<<c<<endl;
}
