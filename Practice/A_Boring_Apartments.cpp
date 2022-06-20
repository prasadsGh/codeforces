#include <bits/stdc++.h>
using namespace std;
int getdigit(int n)
{
    int count=0;
    while(n>0)
    {
        count++;
        n/=10;
    }
    return count;

    
}

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int temp=n%10;
        int count=getdigit(n);
        int res=(temp-1)*10;
        if(count==1) res+=1;
        else if(count==2) res+=3;
        else if(count==3) res+=6;
        else if(count==4) res+=10;
        cout<<res<<endl;
    }
return 0;
}