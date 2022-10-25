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
void dontquit()
{
    ll n;
    char x;
    cin >> n >> x;
    string s;
    cin >> s;
    s += s;
    ll temp;
    for (int i = n - 1; i < (2 * n); i++)
    {
        if (s[i] == 'g')
        {
            temp = i;
            break;
        }
    }
    n = temp + 1;
    // for (int i = 0; i < n; i++)
    //     cout << s[i];
    // cout << endl;
    int flag = 0, flag1 = 0;
    ll ans = INT_MIN;
    ll count = 0;
    ll temp1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == x && flag == 0)
        {
            temp1 = i;
            flag = 1;
            flag1 = 0;
        }
        if (s[i] == 'g' && flag1 == 0)
        {
            ans = max(ans, (abs(i - temp1)));
            flag1 = 1;
            flag = 0;
        }
    }
    cout << ans << endl;
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