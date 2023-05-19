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
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll pos=n-1;
    while(pos>=0 && v[pos]<=v[pos-1]) pos--;
    while(pos>=0 && v[pos]>=v[pos-1]) pos--;
    if(pos<0) cout<<0<<endl;
    else 
    cout<<pos<<endl;

}

int main()
{
          ios_base::sync_with_stdio(false);
      cin.tie(NULL); cout.tie(NULL);
          ll t=1; 
          cin>>t; 
          while(t--)
          {
            prasad();
          }
          return 0;
}
