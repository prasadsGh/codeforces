/* author:prasad patil
   codeforces:rocklee07
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define vll vector<ll>
#define fori(n) for(int i=0;i<n;i++)
#define pb push_back
ll MOD9 = 998244353;
ll mod1e9 = 1000000007;
#define dbg(x) cout << #x << " = " << x << ln
#define INF 2e18
#define all(x) (x).begin(), (x).end()
//"this is code of prasads_cf"

//-----------------------MODULAR INVERSION -----------------
ll inv(ll r){if(r==1) return 1;return (mod1e9-((mod1e9/r) *inv(mod1e9%r))%mod1e9+mod1e9)%mod1e9;}
//---------------------SIEVE OF ERATOSTHENES-----------------
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)
if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
//-----------------------BINARY EXPONTIATION----------------------
ll power(ll a,ll n){ ll res=1; while(n){if(n%2){res*=a;n--;}else{a*=a;n/=2;}} return res;}
//----------------------code begines here-----------------------
void dontquit()
{  
ll n; cin>>n;
vector<ll>v(n);

for(ll i=0;i<n;i++)
{
    cin>>v[i];
}
ll i=0,j=n-1;
vector<ll>pre;
sort(all(v));
while(i<=j)
{
    if(i==j)
    {
        pre.push_back(v[i]);
        break;
    }
    pre.push_back(v[j]);
    j--;
    pre.push_back(v[i]);
    i++;
}
vector<ll>pre1(n);
pre1[0]=0;
for(ll i=1;i<n;i++)
{
    pre1[i]=pre1[i-1]+pre[i-1];
}
for(ll i=0;i<n;i++)
{
    if(pre1[i]==pre[i])
    {
        cout<<"NO\n";
        return;
    }
}
cout<<"YES\n";
for(ll i=0;i<n;i++)
{
    cout<<pre[i]<<" ";
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