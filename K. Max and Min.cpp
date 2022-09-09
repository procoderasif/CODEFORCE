#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m[5],a,b,c,maxi=-100000,j,i,mini=100000;

    for(i=1; i<=3; i++)
    {
        cin>>m[i];
    }
    for(i=1; i<=3; i++)
    {
        if(m[i]>maxi)
        {
            maxi=m[i];
        }
    }
    for(i=1; i<=3; i++)
    {
        if(m[i]<mini)
        {
            mini=m[i];
        }
    }

    cout<<mini<<" ";
    cout<<maxi;

    return 0;
}
