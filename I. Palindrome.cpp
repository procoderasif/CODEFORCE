#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,p,z,m=0;;
    cin>>a;
    z=a;
    while(a>0)
    {
        p=a%10;
        m=m*10+p;
        a/=10;

   }

if(m==z){
    cout<<m<<endl<<"YES"<<endl;
}
else{
    cout<<m<<endl<<"NO"<<endl;
}
    return 0;
}
