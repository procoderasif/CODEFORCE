
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,x,n,even=0,odd=0,pos=0,neg=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        if(x%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if(x>0)
        {
            pos++;
        }
        else if(x<0)
        {
            neg++;
        }
    }
    cout<<"Even: "<<even<<" Odd: "<<odd <<"Positive: "<<pos <<"Negative: "<<neg;


    return 0;
}
