#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        if(i%2==0){
        cout<<i<<endl;
        }
        if(i<2)
        {
            cout<<"-1"<<endl;
        }
    }

    return 0;
}

