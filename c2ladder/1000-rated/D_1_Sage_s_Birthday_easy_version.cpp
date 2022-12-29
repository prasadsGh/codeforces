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
    sort(all(v));
    ll k=((n-1)/2);
    ll temp=k;
    vector<ll>v1;
    cout<<k<<endl;
    for(ll i=k;i<n;i++)
    {
        v1.push_back(v[i]);
        if(temp)
        {
            v1.push_back(v[i-k]);
            temp--;
        }
             
    }
    for(ll i=0;i<v1.size();i++)
             cout<<v1[i]<<" ";
    cout<<endl;

}
int main()
{
ll t=1;
// cin>>t;
while(t--)
{
dontquit();
}
return 0;
}