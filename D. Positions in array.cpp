#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i,arr[100010];
cin>>n;
for(i=0;i<n;i++){
    cin>>arr[i];
}
for(i=0;i<n; ){
   if(arr[i]<=10){
    cout<<"A["<<i<<"] = "<<arr[i]<<endl;
    i++;
   }
   else{
    i++;
   }
}

return 0;
}
