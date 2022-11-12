#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,arr[100010],i,j,x=0,flag=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int coun=n/2;

        for(i=0; i<=coun-1; i++,j--)
        {
            if(arr[i]!=arr[j])
            {
                flag=1;
            }
        }


    if(flag==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    return 0;
}
