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
    ll count0=0, count1=0,count2=0;
    for(ll i=0;i<n;i++)
    {
        if((v[i]%3)==0) count0++;
        else if((v[i]%3)==1) count1++;
        else count2++;
    }

    
    // cout<<count0<<" "<<count1<<" "<<count2<<endl;
    map<ll,ll>mp;
    mp[0]=count0;
    mp[1]=count1;
    mp[2]=count2;
    // cout<<ans<<endl;
    ll ans=0;
    ll i=0;
   while(i<3)
   {
      if(mp[i]>(n/3))
      {
        mp[i]--;
        mp[(i+1)%3]++;
        ans++;
        
      }
      i++;
      if((mp[0]==mp[1])&& (mp[1]==mp[2])) break;
      if(i==3)i=0;
      
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