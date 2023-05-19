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
    string s;
    cin>>s;
    int n=s.length();
    int low=-1,high=-1;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0') flag=1;
        if(s[i]=='1')
        {
            low=i;
            break;
        }
    }
    for(int i=(n-1);i>=0;i--)
    {
        if(s[i]=='1')
        {
            high=i;
            break;
        }
    }
    // cout<<low<<" "<<high<<endl;
    int count=0;
    
    if((n==1 &&s[0]=='1') or (high==low) ) 
    {
        cout<<"0\n";
    }
    else if((low==-1) && (high==-1))cout<<"0"<<endl;
    else 
    {
          for(int i=low;i<=high;i++)
        {
          if(s[i]=='0') count++;
         }
         cout<<count<<endl;

    }
  
    
}
int main()
{
 fast_cin();
 ll t;
 cin >> t;
 while(t--) {
 prasad();
 }
 return 0;
}