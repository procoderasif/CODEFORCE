#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i,n,j,flag;
    cin>>n;
    for(i=2; i<=n; i++)
    {
        flag=0;

        for(j=2;j<=i/2; j++)
        {
            if(i%j==0)
            {
             flag=1;
             break;
            }

        }
        if(flag==0){
            cout<<i<<" ";
        }

    }


    return 0;
}
