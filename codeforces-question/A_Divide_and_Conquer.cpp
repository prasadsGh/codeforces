#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define fori(n) for (int i = 0; i < n; i++)
#define pb push_back
ll MOD = 998244353;
#define dbg(x) cout << #x << " = " << x << ln
#define INF 1e9
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
    // ll count = 0, count1 = 0;
    vector<ll> ans, ans12;
    for (int i = 0; i < n; i++)
    {
        if (v[i] & 1)
            ans.push_back(v[i]);
        else
            ans12.push_back(v[i]);
    }
    if ((ans.size() % 2) == 0)
    {
        cout << 0 << endl;
        return;
    }
   ll count=0;
   ll ans1= INF;
   ll n1=n;
   for(ll i=0;i<n1;i++)
   {
        n=v[i];
       if((n%2)==0)
       {
        count=0;
          while((n%2)==0)
          {
            count++;
            n=(n>>1);
          }
          ans1=min(ans1,count);
       }
       else 
       {
        count=0;
        while((n%2)!=0)
        {
            count++;
            n=(n>>1);
        }
        ans1=min(ans1, count);
       }
   }
   cout<<ans1<<endl;
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