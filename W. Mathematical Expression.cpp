#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    char d,e;
    cin>>a>>d>>b>>e>>c;

    if(a+b==c && d=='+' && e=='=' )
    {
        cout<<"Yes"<<endl;

    }
    else if(a+b!=c && d=='+' && e=='=')
    {
        cout<<a+b<<endl;
    }
    if( a-b==c && d=='-' && e=='=')
    {
        cout<<"Yes"<<endl;

    }
    else if(a-b!=c && d=='-' && e=='=')
    {
        cout<<a-b<<endl;
    }
    if(a*b==c && d=='*' && e=='=' )
    {
        cout<<"Yes"<<endl;

    }
    else if(a*b!=c && d=='*' && e=='=')
    {
        cout<<a*b<<endl;
    }
    return 0;
}
