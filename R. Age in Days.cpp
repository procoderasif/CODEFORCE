#include<bits/stdc++.h>
using namespace std;
int main(){
int n,y,m;
cin>>n;
y=n/365;
m=n%365;
cout<<y<<" years"<<endl;
int mm=m/30;
cout<<mm<<" months"<<endl;
int day = m%30;
cout<<day<<" days"<<endl;
return 0;
}
