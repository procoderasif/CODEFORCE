#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=1,j=60;
while(i>=0 && j<=60)
{
    cout<<"I="<<i<<" ";
    cout<<"J="<<j<<endl;
    i=i+3;
    j=j-5;
   if(j<0)
    {
    break;
    }
}



return 0;
}
