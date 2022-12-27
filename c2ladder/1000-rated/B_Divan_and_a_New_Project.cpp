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
    vector<pair<ll,ll>>vp;
    for(ll i=0;i<n;i++)
    {
        vp.push_back({v[i],i});
    }
    sort(all(vp));
    reverse(all(vp));
    ll temp=1;
    vector<pair<ll,ll>>ans;
    ll k=temp;
    
    ll b[n+1];
    b[0]=0;
    ll count=0;
    for(ll i=0;i<n;i++)
    {
        b[vp[i].second+1]=temp;
        count+=(abs(temp)*2*vp[i].first);
        if(temp>0)
        {
            temp*=-1;
        }
        else
        {
            temp*=-1;
            temp++;
        }
        
    }
    
   
    cout<<count<<endl;
    for(ll i=0;i<=n;i++)
    {
        cout<<b[i]<<" ";
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