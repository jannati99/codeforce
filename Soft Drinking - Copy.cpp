#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int x=k*l;
    int y=x/nl;
    int z=c*d;
    int t=p/np;

    if(y<=z&&y<=t)
        cout<<y/n<<endl;
    else if(z<=y&&z<=t)
        cout<<z/n<<endl;
     else
            cout<<t/n<<endl;

    return 0;
}
