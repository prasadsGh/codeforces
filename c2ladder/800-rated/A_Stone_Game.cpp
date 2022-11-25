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
int min_value(int arr[],int n)
{
    int x=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[x]) x=i;
    }
    return x;
}
 
 int max_value(int arr[], int n)
 {
      int x=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<arr[x]) x=i;
    }
    return x;
 }
 

void solve(){
    ll n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int a=min_value(arr,n);
    int b=max_value(arr,n);
    int k=(n-b);
    int l=(n-a);
  int a1=((a+1)+  min(abs(a-b),k));
  int a2=((b+1)+  min(abs(a-b),l));
  int a3=((n-a)+ min(abs(a-b),(b+1)));
  int a4=((n-b)+min(abs(a-b),(a+1)));

  cout<<min(min(a1,a2),min(a3,a4))<<endl;
  
 
  
  
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