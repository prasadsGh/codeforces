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
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.pb(x);
    }
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        mp[v[i]]++;
    }
    if(mp.size()==1)
    {
        cout<<0<<endl;
        return;
    }
    ll temp = 0, max1 = 0;
    // for(auto i:mp)
    // {
    //     if(i.second>max1)
    //     {
    //         max1=i.second;
    //         temp=i.first;
    //     }
    // }
    // ll temp1=0;
    // for(auto i:mp)
    // {
    //     if((temp^(i.first))==1)
    //     {
    //        max1+=(i.second);
    //     }
    // }
    for (auto i : mp)
    {
        for (auto j : mp)
        {
            if (i.first != j.first)
            {
                if (((i.first) ^ (j.first)) <= 1)
                {
                    max1 = max(max1, (i.second + j.second));
                }
            }
        }
    }
    if(max1==0)
    {
        for(auto i:mp)
        {
            max1=max(max1,i.second);
        }
    }
    ll ans = n - max1;
    cout <<ans<< endl;
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