#include<bits/stdc++.h>
using namespace std;
int main()

{
    char n,N,M;
    cin>>n;
    if(n>=65 && n<=90)
    {
       N=n+32;
    cout<<N;
    }
    else if(n>=97 && n<=122){
        M=n-32;
        cout<<M;
    }
    return 0;
}
