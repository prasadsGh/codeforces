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
    int a,b,c;
    cin>>a>>b>>c;
    int temp=max(a,max(b,c));
    if ((a==b)&&(b==c)&&(a==c))
    {
        cout<<"YES\n";
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    else if((temp==a) && (temp==b)) 
    {
        cout<<"YES\n";
        cout<<temp<<" "<<c<<" "<<"1"<<endl;
    }
    else if((temp==b) and (temp==c))  
    {
        cout<<"YES\n";
         cout<<temp<<" "<<a<<" "<<"1"<<endl;
    }
    else if((temp==a) and (temp==c) )
    {
         cout<<"YES\n";
          cout<<temp<<" "<<b<<" "<<"1"<<endl;

    }
    else cout<<"NO\n";
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