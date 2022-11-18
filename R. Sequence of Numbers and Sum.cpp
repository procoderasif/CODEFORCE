#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i,x;
    while(1){

    cin>>a>>b;

   x=0;
    if(a>0 && b>0)
    {
        if(a>=b)
        {
            c=a;
            a=b;
            b=c;
        }
        else{
            a=a;
            b=b;
        }
        for(i=a; i<=b; i++)
        {
            x=x+i;
            cout<<i<<" ";

        }
        cout<<"sum="<<x<<endl;
    }
    else{
        break;
    }
    }

    return 0;
}
