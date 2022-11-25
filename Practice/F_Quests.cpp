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
bool check(vector<ll>pre,ll mid, ll n,ll c, ll d)
{
    ll x=(d/(mid+1));
    ll kp= min((d%(mid+1))-1,n-1);
    ll total= pre[kp]+(x*pre[min(mid,n-1)]);
    if(total>=c) return true;
    else return false;

}
void dontquit()
{
  ll n,c,d; cin>>n>>c>>d;
  vector<ll>v;
  for(int i=0;i<n;i++)
  {
  ll x;
  cin>>x;
  v.pb(x);
  }
  sort(v.rbegin(),v.rend());
  vector<ll>pre(n,0);
  pre[0]=v[0];
  for(int i=1;i<n;i++)
  {
    pre[i]=pre[i-1]+v[i];
  }
  // cout<<n<<" "<<c<<" "<<d<<endl;
  // cout<<" ---------------\n";
  // for(ll i=0;i<n;i++)
  // {
  //   cout<<pre[i]<<" ";
  // }
  // cout<<endl;
  if((pre[n-1]*d)<c)
  {
    cout<<"Impossible\n";
    return;
  }
  if(pre[0]>=c)
  {
    cout<<"Infinity\n";
    return;
  }
  ll low=0, high=(d);
  ll ans=0;
  while(low<=high)
  {
    ll mid=((low+high)/2);
       if(check(pre,mid,n,c,d))
       {
          ans= mid;
          low=mid+1;
       }
       else high=mid-1;
  }
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