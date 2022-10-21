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
void dontquit()
{
    ll n, m;
    cin >> n >> m;
    map<string, string> mp;
    for (int i = 0; i < m; i++)
    {
        string a, b;
        cin >> a >> b;
        mp[a] = b;
    }
    for (int i = 0; i < n; i++)
    {
        string kp;
        cin >> kp;
        if (mp[kp].length() < kp.length())
            cout << mp[kp] << " ";
        else
            cout << kp << " ";
    }
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