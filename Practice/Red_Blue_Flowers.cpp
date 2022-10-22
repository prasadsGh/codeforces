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

ll total = INT_MIN;
void chosemax(ll arr[], ll arr1[], ll i, ll x, ll y, ll n)
{
    if (i == n)
    {
        total = max(total, min(x, y));
        return;
    }
    chosemax(arr, arr1, i + 1, x + arr[i], y,n);
    chosemax(arr, arr1, i + 1, x, y + arr1[i],n);
}
void dontquit()
{
    ll n;
    cin >> n;
    ll arr[n], arr1[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    // ll a = 0, b = 0, c = 0;
    chosemax(arr, arr1, 0LL, 0LL, 0LL, n);
    cout << total << endl;
    total=INT_MIN;
}
int main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
        dontquit();e
    }
    return 0;
}