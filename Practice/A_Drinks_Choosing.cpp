//this code belongs to prasad patil
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
//this code belongs to prasad patil
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
//this code belongs to prasad patil
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
//this code belongs to prasad patil
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 

void prasad(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    map<int,int> m;
    int set1=0;
    if((n%2)==0) set1=(n/2);
    else set1=((n/2)+1);
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }
    vector<int>v;
    for(auto it=(m.begin());it!=(m.end());it++)
    {
        
        v.push_back(((*it).second));
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    int ans=0;
    int temp=set1;
    int flag=0;
   int m1=v.size();
    for(int i=0;i<m1;i++)
    {
        ans+=((v[i]/2)*2);
        temp-=((v[i]/2));
        if(temp==0) break;
    }
   ans+=(temp);
   cout<<ans<<endl;



}
int main()
{
 prasad();
 return 0;
}