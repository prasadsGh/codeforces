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
typedef pair<int, int> pi;
//"this is code of prasads_cf"
//-----------------------SIEVE OF ERATOSTHENES-----------------
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)
if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
//-----------------------BINARY EXPONTIATION----------------------
ll power(ll a,ll n){ ll res=1; while(n){if(n%2){res*=a;n--;}else{a*=a;n/=2;}} return res;}
//----------------------code begines here-----------------------
void dontquit()
{
    ll n,k; cin>>n>>k;
    ll h[n],p[n];
    for(ll i=0;i<n;i++) cin>>h[i];
    for(ll i=0;i<n;i++) cin>>p[i];

    vector<pair<ll,ll>>vp;  
        for(ll i=0;i<n;i++)
        {
            vp.push_back({p[i],h[i]});

        } 
     sort(all(vp));
     ll i=0;
     ll total=k;
     while(i<n && k>=0)
     {
        if(vp[i].second<=total)
        {
            i++;
        }
        else
        {
            total+=k-vp[i].first;
            k-=vp[i].first;
        }
     }
    if(k>=0)
    {
        cout<<"YES\n";
    }
    else cout<<"NO\n";

   

   

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