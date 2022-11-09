#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
int n,i,arr[100009],x=0;
cin>>n;
for(i=0;i<n;i++){

   cin>>arr[i];
   x=x+arr[i];
}
cout<<abs(x)<<endl;


return 0;
}
