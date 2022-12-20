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
    cin >> n;
    vector<pair<ll, ll>> v;
    ll a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        v.push_back({a, b});
    }
    int flag1 = 0, flag2 = 0, flag3 = 0, flag4 = 0;
    ll count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((v[i].first == v[j].first) && v[i].second < v[j].second && flag1 == 0)
                flag1 = 1;
            if ((v[i].first == v[j].first) && v[i].second > v[j].second && flag2 == 0)
                flag2 = 1;
            if ((v[i].first > v[j].first) && v[i].second == v[j].second && flag3 == 0)
                flag3 = 1;
            if ((v[i].first < v[j].first) && v[i].second == v[j].second && flag4 == 0)
                flag4 = 1;
        }
        if (flag1 && flag2 && flag3 && flag4)
            count++;
        flag1 = 0;
        flag2 = 0;
        flag3 = 0;
        flag4 = 0;
        
    }
    cout<<count<<endl;
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