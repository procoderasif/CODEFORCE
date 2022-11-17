#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,coun=0,x;
    cin>>a>>b;
    for(int i=a; i<=b; i++)
    {
        int flag=0;
         x=i;
        while(x>0)
        {
            int r=x%10;
            if(r!=4 && r!=7)
            {
                flag++;
            }
            x=x/10;
        }
        if(flag==0){
            cout<<i<<" ";
            coun++;

        }
    }
if(coun==0){
    cout<<"-1";
}


    return 0;
}
