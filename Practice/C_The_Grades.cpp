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
    string s; 
    ll n; cin>>n;
    map<string ,vector<ll>>vp;
    map<string ,ll>mp;
    while(n--)
    {
        vector<ll>v;
        cin>>s;
        ll sum=0;
        for(int i=0;i<4;i++)
        {
            ll x; cin>>x;
            v.push_back(x);
            sum+=x;
        }
        vp[s]=v;
        mp[s]=sum;
    }
   
  
    vector<pair<ll,string>>vp1;
    for(auto i: mp)
    {
        vp1.push_back({i.second,i.first});
    }
    
    sort(all(vp1));
    reverse(all(vp1));
    for(int i=0;i<vp1.size();i++)
    {
        cout<<vp1[i].first<<" "<<vp1[i].second<<endl;
    }
    vector<pair<string,ll>>vpp1,vpp2;
    cout<<"------------\n";
    for(int i=0;i+1<vp1.size();i++)
    {
        if(abs(vp1[i].first-vp1[i+1].first)>=10)
        {
            vpp1.push_back({vp1[i].second,vp1[i].first});
            cout<<vp1[i].first<<" "<<vp1[i].second<<endl;
        }
        else 
        {
           vpp2.push_back({vp1[i].second,vp1[i].first}); 
        }
    }
    //   vpp2.push_back({vp1[vp1.size()-1].second,vp1[vp1.size()-1].first}); 
    //   sort(all(vpp2));
    //   for(int i=0;i<vpp1.size();i++)
    //   {
    //     cout<<vpp1[i].first<<" "<<vpp1[i].second<<" ";
    //     for(auto i:vp[vpp1[i].first])
    //     {
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    //   }
    //   for(int i=0;i<vpp2.size();i++)
    //   {
    //     cout<<vpp2[i].first<<" "<<vpp2[i].second<<" ";
    //     for(auto i:vp[vpp2[i].first])
    //     {
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    //   }


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