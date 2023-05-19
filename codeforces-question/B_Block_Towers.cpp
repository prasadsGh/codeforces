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
    vector<ll>v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    ll temp=v[0];
    sort(all(v));
    ll i=0;
    ll it=lower_bound(all(v),temp)-v.begin();
    swap(v[it],v[0]);
    for(ll i=0;i<n;i++)
    {
        auto it=upper_bound(all(v),v[0]);
        ll idx=(it-v.begin());
       if(it==v.end())
       {
          cout<<v[0]<<endl;
          return;
       }
       ll xp=v[0]+v[idx];
       if((xp&1))
       {
         xp=(xp/2);
         xp++;
         v[0]=xp;
         v[idx]=(xp-1);
       }
       else
       {
         xp=(xp/2);
         v[idx]=xp;
         v[0]=xp;
       }  
    }
    cout<<v[0]<<endl;


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