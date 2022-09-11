#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,maxi=0,i,n;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        if(a>maxi)
        {
            maxi=a;
        }

    }
    cout<<maxi<<endl;
    return 0;
}
