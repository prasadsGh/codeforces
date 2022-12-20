#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define vll vector<ll>
#define fori(n) for(int i=0;i<n;i++)
#define pb push_back
ll MOD = 998244353;
#define dbg(x) cout << #x << " = " << x << ln
#define INF 2e18
#define all(x) (x).begin(), (x).end()
//"this is code of prasads_cf"
//-----------------------SIEVE OF ERATOSTHENES-----------------
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)
if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
//-----------------------BINARY EXPONTIATION----------------------
ll power(ll a,ll n){ ll res=1; while(n){if(n%2){res*=a;n--;}else{a*=a;n/=2;}} return res;}
//----------------------code begines here-----------------------
void dontquit()
{
    ll n; cin>>n;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
    ll x;
    cin>>x;
    v.pb(x);
    }
   map<ll,ll>mp;
   for(ll i=0;i<n;i++)
   {
    mp[v[i]]++;
   }
    ll count= (n-1)*n;
    count/=2;
    int flag=0;
    for(auto i:mp)
    {
        if(i.second>=2)
        {
            ll x= (i.second-1)*(i.second);
            x/=2;
            count-=x;
            flag=1;
        }
    }
    if(flag)
    count++;
    cout<<count<<endl;
}
int main()
{
ll t=1;
cin>>t;
while(t--)
{
dontquit();
}
return 0;
}