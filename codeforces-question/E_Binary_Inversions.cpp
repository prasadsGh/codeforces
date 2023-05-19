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
    vector<ll>v;
    for(ll i=0;i<n;i++)
    {
    ll x;
    cin>>x;
    v.pb(x);
    }
    vector<ll>pre0(n,0),pre1;
    int count0=0,count1=0;
    
    for(ll i=0;i<n;i++)
    {
        if(v[i]==1)
        {
            count1++;
            pre1.push_back(count1);
        }
        else
        {
            pre1.push_back(count1);
        }
    }
    pre1[0]=0;
    for(ll i=(n-1);i>=0;i--)
    {
        if(v[i]==0)
        {
            count0++;
            pre0[i]=count0;
        }
        else
        {
            pre0[i]=count0;
        }

    }
    pre0[n-1]=0;
    // for(ll i=0;i<n;i++)
    // {
    //     cout<<pre1[i]<<" ";
    // }
    // cout<<endl;
    //  for(ll i=0;i<n;i++)
    // {
    //     cout<<pre0[i]<<" ";
    // }
    // cout<<endl;

    ll total=0;
    for(ll i=0;i<n;i++)
    {
        if(v[i]==1)
        {
            if(pre0[i]!=0)
            total+=(pre0[i]);
        }
    }
    // cout<<total<<endl;
    ll ans=total;
    for(ll i=0;i<n;i++)
    {
        ll x= total;
        if(v[i]==1)
        {
            if(pre1[i]!=0)
                x+=(pre1[i]-1);
            if(pre0[i]!=0)
                x-=(pre0[i]);
                ans=max(ans,x);
        }
        else
        {
              if(pre1[i]!=0)
                x-=(pre1[i]);
            if(pre0[i]!=0)
                x+=(pre0[i]-1);
            ans=max(ans,x);
            
        }
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