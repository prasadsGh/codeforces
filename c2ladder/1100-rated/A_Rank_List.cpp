#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define fori(n) for (int i = 0; i < n; i++)
#define pb push_back
ll MOD = 998244353;
#define dbg(x) cout << #x << " = " << x << ln
#define INF 2e18
#define all(x) (x).begin(), (x).end()
//"this is code of prasads_cf"
//-----------------------SIEVE OF ERATOSTHENES-----------------
vector<ll> sieve(int n)
{
    int *arr = new int[n + 1]();
    vector<ll> vect;
    for (int i = 2; i <= n; i++)
        if (arr[i] == 0)
        {
            vect.push_back(i);
            for (int j = 2 * i; j <= n; j += i)
                arr[j] = 1;
        }
    return vect;
}
//-----------------------BINARY EXPONTIATION----------------------
ll power(ll a, ll n)
{
    ll res = 1;
    while (n)
    {
        if (n % 2)
        {
            res *= a;
            n--;
        }
        else
        {
            a *= a;
            n /= 2;
        }
    }
    return res;
}
//----------------------code begines here-----------------------
bool custhash(pair<ll, ll> &a, pair<ll, ll> &b)
{

    if (a.first == b.first)
    {
        
         if (a.second < b.second)
            return true;
        else
            return false;
    }
    if (a.first > b.first)
        return a.first > b.first;
    else
        return false;
}
void dontquit()
{
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> vp;
    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        vp.push_back({x, y});
    }
    n=vp.size();
    sort(vp.begin(), vp.end(), custhash);
    map<pair<ll, ll>, ll> mp;
    // for(ll i=0;i<n;i++)  
    // {
    //     cout<<vp[i].first<<" "<<vp[i].second<<endl;
    // }
    for (ll i = 0; i < n; i++)
    {
        mp[{vp[i].first, vp[i].second}]++;
    }
    // cout << vp[k - 1].first<<" "<<vp[k-1].second<< endl;
    cout<<mp[vp[k-1]]<<endl;

    // cout<<vp.size()<<endl;
    // cout<<count<<endl;
}
int main()
{
    ll t = 1;
    // cin>>t;
    while (t--)
    {
        dontquit();
    }
    return 0;
}