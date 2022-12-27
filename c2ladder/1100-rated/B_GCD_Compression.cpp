#include <bits/stdc++.h>
using namespace std;
#define ll int32_t
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
void dontquit()
{
    ll n;
    cin >> n;
    ll k = (n - 1);
    n *= 2;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];
    vector<ll> hash(n, 0);
    ll gcd_val;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; i < j; j++)
        {
            if (i == j)
                continue;
            gcd_val = (v[i], v[j]);
            if (gcd_val > 1)
                break;
        }
    }
    vector<pair<ll, ll>> vp;
    int flag = 0;
    for (ll i = 0; i < n; i++)
    {
        if (hash[i] == 0)
        {
            for (ll j = 0; j < n; j++)
            {
                if (i == j)
                    continue;
                if (hash[j] == 0)
                {
                    ll temp = __gcd(gcd_val, v[i] + v[j]);
                    if (temp > 1)
                    {
                        gcd_val = temp;
                        hash[i] = 1;
                        hash[j] = 1;
                        vp.push_back({i + 1, j + 1});

                        break;
                    }
                }
            }
            if (vp.size() == k)
            {
                break;
            }
        }
    }
    for (ll i = 0; i < vp.size(); i++)
    {
        cout << vp[i].first << " " << vp[i].second << endl;
    }
    // cout<<"----------\n";
}
int main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
        dontquit();
    }
    return 0;
}