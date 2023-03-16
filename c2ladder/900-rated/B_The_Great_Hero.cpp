/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void prasad()
{
    ll A, B, n;
    cin >> A >> B >> n;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    for (ll i = 0; i < n; i++)
        cin >> b[i];
    vector<pair<ll,ll>>vp(n);
    for(ll i=0;i<n;i++)
    {
        vp[i]={a[i],b[i]};
    }
    sort(vp.begin(),vp.end());
    for(ll i=0;i+1<n;i++)
    {
        ll count=((vp[i].second+A-1)/A);
        B-=(count*(vp[i].first));
        if(B<=0)
        {
            cout<<"NO\n";
            return;
        }
    }
    ll count=((vp[n-1].second+A-1)/A);
        B-=((count-1)*(vp[n-1].first));
        if(B<=0)
        {
            cout<<"NO\n";
            return;
        }
   
    cout<<"YES\n";

    
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
