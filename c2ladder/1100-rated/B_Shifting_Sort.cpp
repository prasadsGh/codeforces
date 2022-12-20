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
  vector<ll> v(n);
  for (ll i = 0; i < n; i++)
    cin >> v[i];

  vector<pair<pair<ll, ll>, ll>> vp;
  for(ll i=0;i<n;i++)
  {
    ll min_pos=i;
    for(ll j=i+1;j<n;j++)
    {
      if(v[j]<v[min_pos])
      {
        min_pos=j;
      }
    }
    if(i<min_pos)
    {
       vp.push_back({{i,min_pos},min_pos-i});
       ll temp=v[min_pos];
       for(ll k=min_pos;k>i;k--)
       {
        v[k]=v[k-1];
       }
       v[i]=temp;
    }
  }
   cout<<vp.size()<<endl;
    for(ll i=0;i<vp.size();i++)
    {
      cout<<vp[i].first.first+1<<" "<<vp[i].first.second+1<<" "<<vp[i].second<<endl;
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