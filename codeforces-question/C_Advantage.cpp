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
    // ll n; cin>>n;
    // deque<ll>v;
    // for(int i=0;i<n;i++)
    // {
    // ll x;
    // cin>>x;
    // v.pb(x);
    // }
    // for(int i=0;i<n;i++)
    // {
    // ll mp=v[0];
    // v.pop_front();
    // ll ans=mp-*max_element(all(v));
    // cout<<ans<<" ";
    // v.push_back(mp); 
    // }
    // cout<<endl;
    ll n; cin>>n;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
    ll x;
    cin>>x;
    v.pb(x);
    }
    vector<ll>v1=v;
    sort(all(v1));
    ll it=max_element(all(v))-v.begin();
    for(int i=0;i<n;i++)
    {
         if(i==it)
         {
            cout<<v[it]-v1[n-2]<<" ";
         }
         else
         {
            cout<<v[i]-v[it]<<" ";
            
         }
    }
    cout<<endl;
    

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