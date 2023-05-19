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
    

    ll n = 0, m = 0, k = 0, ans = 0;
    string s;
    ll w, h;
    cin >> n >> w >> h;
    vector<pair<ll,ll>> p1, p2;

    vector<ll> a(n), b(n);

    for(ll i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(ll i=0;i<n;i++)
    {
        cin >> b[i];
    }
    
    ll dis1 = a[0] - w;
    ll dis2 = b[0] - h;
    for (int i = 0; i < n; i++)
    {
        p1.push_back({(a[i] - w - dis1), (a[i] + w - dis1)});
        p2.push_back({(b[i] - h - dis2), (b[i] + h - dis2)});
    }
    ll max1 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if ((p1[i].first > p2[i].first))
        {
            max1 = max(max1, (p1[i].first - p2[i].first));
        }
    }
    if (max1 <= 0)
    {

        max1 = INT_MIN;
        for (int i = 0; i < n; i++){
            if(p2[i].second>p1[i].second){
                max1 = max(max1,(p2[i].second-p1[i].second));
            }
        }
        for (int i = 0; i < n; i++)
        {
            p2[i].second-=max1;
            p2[i].first-=max1;
        }
        for (int i = 0; i < n; i++)
        {
            if (p1[i].first <= p2[i].first)
            {
                continue;
            }else{
                ans = 1;
            }
        }
    }
    else
    {
        
        for (int i = 0; i < n; i++)
        {
            p1[i].first -= max1;
            p1[i].second -= max1;
        }
           for (int i = 0; i < n; i++)
        {
            if (p1[i].second >= p2[i].second)
            {
                continue;
            }else{
                // cou
                ans = 1;
            }
        }
    }
    if(ans){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
  

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