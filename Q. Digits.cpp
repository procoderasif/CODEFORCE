#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i,n,x;
cin>>a;


    for(i=1;i<=a;i++){
            cin>>n;
             if(n==0){
    cout<<0;
}
    while(n>0)
    {
       x=n%10;
       cout<<x<<" ";
       n/=10;

    }

    cout<<endl;

    }



    return 0;
}
