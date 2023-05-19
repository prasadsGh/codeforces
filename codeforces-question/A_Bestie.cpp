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
bool isPrime(ll n)
{
    if ((n == 2) or (n == 3) or n == 5)
    {
        return true;
    }
    if ((n % 2) == 0 or ((n % 3) == 0) or ((n % 5) == 0))
        return false;
    for (int i = 5; i * i < n; i += 2)
    {
        if ((n % i) == 0 or (n % (i + 2)) == 0)
            return false;
    }
    return true;
}

void dontquit()
{
    ll n;
    cin >> n;
    ll arr[n + 1];
    arr[0] = 0LL;
    ll cost = 0;
    for (ll i = 1; i <= n; i++)
        cin >> arr[i];

    // checking if the gcd of whole array i one or not
    ll ans = arr[1];
    // checking for the gcd of whole array
    for (int j = 1; j <= n; j++)
    {
        ans = __gcd(arr[j], ans);
    }
    if (ans == 1)
    {
        cout << 0 << endl;
        return;
    }

    // replacing last element with gcd
    ll temp = arr[n];
    arr[n] = __gcd(arr[n], n);
    ans = arr[1];
    // checking for the gcd of whole array
    for (int j = 1; j <= n; j++)
    {
        ans = __gcd(arr[j], ans);
    }
    if (ans == 1)
    {
        cout << 1 << endl;
        return;
    }
    // replacing original value of last element
    arr[n] = temp;
    // replacing second last elemnt with its gcd
    temp = arr[n - 1];
    arr[n - 1] = __gcd(arr[n - 1], n - 1);
    ans = arr[1];
    // checking for gcd of whole array
    for (int j = 1; j <= n; j++)
    {
        ans = __gcd(arr[j], ans);
    }
    if (ans == 1)
    {
        cout << 2 << endl;
        return;
    }
    // if above two doesnt give the ans then we will replace then
    // with their gcds and after that we will definately get the answers
    // that is 1+2 =3
    cout << 3 << endl;
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