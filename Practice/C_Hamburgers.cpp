#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define vll vector<ll>
#define fori(n) for(int i=0;i<n;i++)
// #define pb push_back
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
ll price(ll i,ll nb,ll ns, ll nc,ll pb,ll ps, ll pc,ll a, ll b, ll c){
    ll sum=0;
    if(((i*a)-nb)>=0)
    sum+=(((i*a)-nb)*pb);
    if(((i*b)-ns)>=0)
    sum+=(((i*b)-ns)*ps);
    if(((i*c)-nc)>=0)
    sum+=(((i*c)-nc)*pc);
    return sum;
}
void dontquit()
{
    string s; cin>>s;
    ll nb,ns,nc; cin>>nb>>ns>>nc;
    ll pb,ps,pc; cin>>pb>>ps>>pc;
    ll m; cin>>m;
    ll a=0,b=0,c=0;
    ll n=s.length();
    for(ll i=0;i<n;i++){
        if(s[i]=='B')a++;
        else if(s[i]=='S') b++;
        else c++;
    }
    ll l=0, r=1e14;

    while(l<=r){
        ll mid=((l+r)/2);
        if(price(mid,nb,ns,nc,pb,ps,pc,a,b,c)<=m)
        {
            l=(mid+1);
        }
        else r=mid-1;
    }
    cout<<l-1<<endl;



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