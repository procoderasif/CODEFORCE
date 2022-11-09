#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,arr[100010],a,x=0;
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cin>>a;
    for(i=0;i<n;i++){
        if(a==arr[i])
        {
           x=1;
           break;
        }

    }
if(n>0){
    cout<<i<<endl;
}
else{
    cout<<"-1"<<endl;
}

    return 0;
}
