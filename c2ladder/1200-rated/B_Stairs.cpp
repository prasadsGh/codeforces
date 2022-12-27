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
    ll x; cin>>x;
    ll count=0;
    ll factor_inc=1;
    ll stair_len=0;
    ll ans=0;
    while(count<x)
    {
        ans++;
        stair_len+=factor_inc;
        count+=(stair_len*((stair_len+1)/2));
        factor_inc=(factor_inc<<1);
        // cout<<count<<" ";
    }
    // cout<<endl;
    if(count>x) ans--;
    //  cout<<"-----\n";

    cout<<ans<<endl;
    //  cout<<"-----\n";


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