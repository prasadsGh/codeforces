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
        ll x; cin>>x;
        v.push_back(x);
    }
    ll min1=INT_MAX;
    ll idx=0;
    // ll count=0;
    ll min11=*min_element(all(v));
    vector<pair<ll,ll>>vp;
    vector<ll>v1=v;
    sort(all(v1));
    vector<ll>visited(n,0);
    ll count=0;
    for(ll i=0;i<n;i++)
    {
        
        for(ll j=0;j<n;j++)
        {
            if(is_sorted(all(v)))
            {
               break;
            }
            if(v1[j]==v[i] && visited[j]==0 && visited[i]==0)
            {
                vp.push_back({i,j});
                swap(v[i],v[j]);
                swap(visited[i],visited[j]);
                visited[j]=1;
                visited[i]=1;
                count++;
                break;
            }
        }
    }
    cout<<count<<endl;
    for(auto i:vp)
    {
        cout<<i.first+1<<" "<<i.second+1<<" "<<1<<endl;
    }

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