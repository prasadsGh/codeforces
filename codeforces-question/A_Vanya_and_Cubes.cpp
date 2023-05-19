#include <bits/stdc++.h>
using namespace std;
int getval(int n)
{
    return (n*(n+1)/2);
}


int main(){
    long long n;
    cin>>n;
    int cnt=0;
    int i=1;
    while(n>0)
    {
         i++;
        n-=getval(i);
        cnt++;
       
    }
    cout<<cnt<<endl;
    
return 0;
}