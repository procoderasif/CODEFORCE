#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,arr[100050],i;
  cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        if(arr[i]>0)
        {
           arr[i]=1;
           cout<<arr[i];

        }
        else if(arr[i]<0){
            arr[i]=2;
             cout<<arr[i];
        }
        else{
            cout<<"0";
    }


    }

    return 0;
}
