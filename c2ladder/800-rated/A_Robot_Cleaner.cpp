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
    ll n, m;
    cin >> n >> m;
    ll a, b, x, y;
    cin >> a >> b >> x >> y;
    ll ans=INF;
    if(x>=a)
    {
        ans=min(ans,x-a);
    }
    else ans=min(ans,2*(n-a)+(a-x));
    if(y>=b)
    {
        ans=min(ans,y-b);
    }
    else ans=min(ans,2*(m-b)+(b-y));
    cout<<ans<<endl;
   
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