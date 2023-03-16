/* author:prasad patil
   codeforces:rocklee07
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define fori(n) for (int i = 0; i < n; i++)
#define pb push_back
ll MOD9 = 998244353;
ll mod1e9 = 1000000007;
#define dbg(x) cout << #x << " = " << x << ln
#define INF 2e18
#define all(x) (x).begin(), (x).end()
//"this is code of prasads_cf"

//-----------------------MODULAR INVERSION -----------------
ll inv(ll r)
{
    if (r == 1)
        return 1;
    return (mod1e9 - ((mod1e9 / r) * inv(mod1e9 % r)) % mod1e9 + mod1e9) % mod1e9;
}
//---------------------SIEVE OF ERATOSTHENES-----------------
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
    string s;
    cin >> s;
    ll n = stoll(s);
    if ((n % 10) != 9)
    {
        ll temp1 = ((n + 1) / 2);
        ll temp2 = (n - temp1);
        cout << temp1 << " " << temp2 << endl;
        return;
    }
    n = s.length();
    string a = "", b = "";
    reverse(all(s));
    int flag = 0;
    for (ll i = 0; i < n; i++)
    {
        ll temp = s[i] - '0';
        ll a1 = ((temp + 1) / 2);
        ll b1 = temp - a1;
        if (a == "" && b == "")
        {
            a = to_string(a1) + a;
            b = to_string(b1) + b;
        }
        else
        {
            ll t1 = stoll(a), t2 = stoll(b);
            if (t1 <= t2)
            {
                a = to_string(a1) + a;
                b = to_string(b1) + b;
            }
            else
            {
                a = to_string(b1) + a;
                b = to_string(a1) + b;
            }
        }
    }
    ll tm=stoll(a);
    ll tm1=stoll(b);
    cout << tm << " " << tm1 << endl;
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