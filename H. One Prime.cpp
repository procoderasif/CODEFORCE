#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,i,f,cunt=0;
    cin>>a;
    for(i=2; i<a; i++)
    {
        if(a%i==0)
        {
            cunt=1;
        }

    }
    if(cunt==1)
    {
        cout<<"No"<<endl;
    }
    else
    {
        cout<<"Yes"<<endl;
    }


}



