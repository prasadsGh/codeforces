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
    ll m; cin>>m;
    vector<ll>v1(m);
    for(ll i=0;i<m;i++) cin>>v1[i];
    vector<ll>pref1,pref2;
    ll temp=0;
    pref1.push_back(v[0]);
    pref2.push_back(v1[0]);
    ll ans=0;
    for(ll i=0;i+1<n;i++)
    {
        pref1.push_back(v[i+1]+pref1[i]);
    }
    for(ll i=0;i+1<m;i++)
    {
        pref2.push_back(v1[i+1]+pref2[i]);
    }
    ll count1=max(0LL,*max_element(all(pref1)));
    ll count2=max(0LL,*max_element(all(pref2)));
    ans=count1+count2;
    cout<<ans<<endl;


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