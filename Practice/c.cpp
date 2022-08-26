//this code belongs to shreya
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
//this code belongs to shreya
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
//this code belongs to shreya
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
//this code belongs to shreya
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 

void solve()
{
    //this is a default output ,you can change it
    int result=0;
    map<int,int> mp;
    for(int i=0;i<(N);i++)
    {   
        for(int j=0;j<2;j++)
        {
            mp[A[i]]++;
            mp[A[j]]++;
        }
    }
    int z=m.size();
    int k=(z-1);
    
    result=(n-k+1);
    //WRITE YOUR LOGIC HERE 

    
}
 
int main()
{
     fast_cin();
     ll t;
     cin >> t;
 
     while(t--)
     {
         solve();
     }
 
 return 0;
}