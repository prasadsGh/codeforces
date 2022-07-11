#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
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
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
int min_val(int arr[],int n)
{
    int x=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[x]) x=i;
    }
    return x;
}
 
 int max_val(int arr[], int n)
 {
      int x=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<arr[x]) x=i;
    }
    return x;
 }
 int minimum(int x,int y)
 {
    return (x<y)?x:y;
 }
  int maximum(int x,int y)
 {
    return (x>y)?x:y;
 }

void solve(){
    ll n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int a=min_val(arr,n);
    int b=max_val(arr,n);
    int x=(minimum(a+1,(n-a-1))+minimum(b+1,minimum(n-b-1,abs(a-b))));
    int y=(minimum(b+1,(n-b-1))+minimum(a+1,minimum(n-a-1,abs(a-b))));
    cout<<x<<" "<<y<<endl;
    cout<<minimum(x,y)+1<<endl;
    
}
int main()
{
 fast_cin();
 ll t;
 cin >> t;
 while(t--) {
solve();
 }
 return 0;
}