/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void prasad()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> v(m);
    for (ll i = 0; i < m; i++)
        cin >> v[i];

    ll j = n - 1;
    ll count=1;
    vector<ll> hash(n, 0);
    map<ll, ll> mp;
    for (ll i = 0; i < m; i++)
    {
        
            if (mp.find(v[i]) != mp.end())
            {
                count++;
               continue;
            }
            else if(j>=0)
            {
                hash[j] =count;
                mp[v[i]]++;
                j--;
                count++;
            }
        
    }
    for(ll i=0;i<n;i++)
    {
        if(hash[i]==0) cout<<-1<<" ";
        else cout<<hash[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        prasad();
    }
    return 0;
}
