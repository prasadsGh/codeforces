/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void prasad()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];
    ll count = 0;
    ll sum = 0;
    ll cnt=0;
    sort(v.begin(), v.end());
    vector<ll>t;
    for(ll i=0;i<n;i++)
    {
        if((v[i]%2)==0)
        {
            ll count1=0;
           
            while((v[i]%2)==0)
            {
               v[i]/=2;
               count1++;
            }
            t.push_back(count1);
            count+=count1;
        }
        else t.push_back(0);
        sum+=v[i];
    }
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        ll c=sum-v[i];
        ll sum1=0;
        sum1=c+(pow(2,count)*v[i]);
        ans=max(ans,sum1);
    }
    cout<<ans<<endl;

}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        prasad();
    }
    return 0;
}
