#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        int flag=0;
        while(n!=1)
        {
            if((n%2)==1)
            {
                flag=1;
                break;
            }
            n/=2;
        }
        if(flag==1) cout<<"YES\n";
        else cout<<"NO\n";
    }
}