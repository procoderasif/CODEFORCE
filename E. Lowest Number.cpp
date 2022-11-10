#include<bits/stdc++.h>
using namespace std;
int main(){
int n,arr[100010],i,mini=9999999,pos;
cin>>n;
for(i=0;i<n;i++){
    cin>>arr[i];
}
for(i=0;i<n;i++ ){
   if(arr[i]<mini){
    mini=arr[i];
    pos=i;
   }

}
cout<<mini<<" "<<pos;


return 0;
}
