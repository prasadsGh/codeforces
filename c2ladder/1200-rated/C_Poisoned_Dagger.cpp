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
ll check(ll arr[], ll n, ll k, ll h)
{
    ll temp = 0;
    for (int i = 0; i + 1 < n; i++)
    {
        temp += min(k, (arr[i + 1] - arr[i]));
    }
    temp += k;
    return temp;
}
void dontquit()
{
    ll n, h;
    cin >> n >> h;
    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    ll ans = 0;
    ll temp = n;
    ll low = 1, high = (h);
    ll mid;
    while (low <= high)
    {
        mid = (low + ((high - low) / 2));
        if (check(arr, n, mid, h) < h)

            low = mid + 1;

        else
            high = mid - 1;
    }
    cout<<low<<endl;
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