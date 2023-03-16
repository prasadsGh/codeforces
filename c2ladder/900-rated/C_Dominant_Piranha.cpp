/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void prasad()
{
     ll n; cin>>n;
     vector<ll>v(n);
    int flag=0;
    ll temp=0;
     for(ll i=0;i<n;i++)
     {
        cin>>v[i];
       temp=max(temp,v[i]);
        
     }
      ll id=-1;
      for(ll i=0;i<n;i++)
      {
         if(v[i]!=temp) continue;
         if(i>0 && v[i-1]!=temp) id=i+1;
         if(i<n-1 && v[i+1]!=temp) id=i+1;
      }
      cout<<id<<endl;

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
