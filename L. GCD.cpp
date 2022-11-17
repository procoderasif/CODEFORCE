#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,coun=0,i;
    cin>>a>>b;
    for( i=1; i<=a && i<=b; i++)
    {
        if(a%i==0 && b%i==0)
        {
            if(i>coun){
                coun=i;
            }

        }

    }
    cout<<coun;

    return 0;
}
