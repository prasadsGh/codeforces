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
    string s;
    cin >> s;
    ll n = s.size();
    ll temp = -1, temp1 = -1;
    for (int i = 0; i + 1 < n; i++)
    {
        if (s[i] == '1' && s[i + 1] == '1')
        {
            temp = i;
            temp1 = i + 1;
            break;
        }
    }
    if ((temp == -1) && (temp1 == -1))
    {
        cout << "YES\n";
        return;
    }
    else
    {
        int flag = 0;
        for (int i = temp1 + 1; i+1< n; i++)
        {
            if (s[i] == '0' && s[i+1]=='0')
            {
                flag = 1;
                break;
            }
           
        }
         if (flag)
                cout << "NO\n";
            else
                cout << "YES\n";
    }
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