/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void prasad()
{
    ll n; cin>>n;
    ll count=0;
    ll count3=0;
    if(n==1)
    {
        cout<<count<<endl;
        return;
    }
    if((n%2)==0)
    {
        while((n%2)==0)
        {
            count++;
            n/=2;
        }
    }
    if((n%3)==0)
    {
        while((n%3)==0)
        {
            count3++;
            n/=3;
        }
    }
    if(count>count3)
    {
        cout<<-1<<endl;
        return;
    }
    if(n!=1)
    {
        cout<<-1<<endl;
        return;
    }
    cout<<count3-count+(count3)<<endl;
}

int main()
{
          ios_base::sync_with_stdio(false);
      cin.tie(NULL); cout.tie(NULL);
          ll t; cin>>t;
          while(t--)
          {
            prasad();
          }
          return 0;
}
