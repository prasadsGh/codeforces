/* author:prasad patil
   codeforces:rocdlee07
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define fori(n) for (int i = 0; i < n; i++)
#define pb push_bacd
ll MOD9 = 998244353;
ll modde9 = 1000000007;
#define dbg(x) cout << #x << " = " << x << ln
#define INF 2e18
#define all(x) (x).begin(), (x).end()
//"this is code of prasads_cf"

//-----------------------MODULAR INVERSION -----------------
ll inv(ll r)
{
    if (r == 1)
        return 1;
    return (modde9 - ((modde9 / r) * inv(modde9 % r)) % modde9 + modde9) % modde9;
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

    ll n = 0, d = 0;
    cin >> n;
    ll even = 0, odd = 1, even1 = 0, odd1 = 0;
    ll a = 1, b = 0;
    d = 2;
    ll ans = 1;

    while (ans <= n)
    {
        if (d % 4 == 0 or d % 4 == 1)
        {
            if (ans & 1)
            {
                if (d & 1)
                {
                    even += (d / 2 + 1);
                    odd += (d / 2);
                }
                else
                {
                    even += (d / 2);
                    odd += (d / 2);
                }
            }
            else
            {
                if (d & 1)
                {
                    odd += (d / 2 + 1);
                    even += (d / 2);
                }
                else
                {
                    even += (d / 2);
                    odd += (d / 2);
                }
            }
        }
        else
        {
            if (ans & 1)
            {
                if (d & 1)
                {
                    even1 += (d / 2 + 1);
                    odd1 += (d / 2);
                }
                else
                {
                    even1 += (d / 2);
                    odd1 += (d / 2);
                }
            }
            else
            {
                if (d & 1)
                {
                    odd1 += (d / 2 + 1);
                    even1 += (d / 2);
                }
                else
                {
                    even1 += (d / 2);
                    odd1 += (d / 2);
                }
            }
        }
        ans += d;
        d++;
    }
    d-=1;
    if (ans > n)
    {
        if (d % 4 == 0 or d % 4 == 1)
        {
            if (n & 1)
            {
                if ((ans - n) & 1)
                {
                    even -= ((ans - n) / 2 + 1);
                    odd -= ((ans - n) / 2);
                }
                else
                {
                    even -= ((ans - n) / 2);
                    odd -= ((ans - n) / 2);
                }
            }
            else
            {
                if ((ans - n) & 1)
                {
                    odd -= ((ans - n) / 2 + 1);
                    even -= ((ans - n) / 2);
                }
                else
                {
                    even -= ((ans - n) / 2);
                    odd -= ((ans - n) / 2);
                }
            }
        }
        else
        {
            if (n & 1)
            {
                if ((ans - n) & 1)
                {
                    even1 -= ((ans - n) / 2 + 1);
                    odd1 -= ((ans - n) / 2);
                }
                else
                {
                    even1 -= ((ans - n) / 2);
                    odd1 -= ((ans - n) / 2);
                }
            }
            else
            {
                if ((ans - n) & 1)
                {
                    odd1 -= ((ans - n) / 2 + 1);
                    even1 -= ((ans - n) / 2);
                }
                else
                {
                    even1 -= ((ans - n) / 2);
                    odd1 -= ((ans - n) / 2);
                }
            }
        }
    }
    cout << odd << " " << even << " " << odd1 << " " << even1;
    cout << endl;
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