#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,n,i,x=0,sum;
    cin>>n;
    for(int j=1; j<=n; j++)
    {
    cin>>a>>b;
    if(a>=b)
    {
        c=a;
        a=b;
        b=c;
    }
    else
    {
        a=a;
        b=b;
    }

    for(i=a+1; i<b; i++)
    {

        if(i%2!=0)
        {
            sum=sum+i;
            x++;
        }

    }
    if(x==0)
    {
        cout<<"0"<<endl;
    }
    else
    {
        cout<<sum<<endl;
    }
    sum=0;
    }




    return 0;
}
