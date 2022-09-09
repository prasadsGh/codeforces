//this code belongs to prasad patil
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
//this code belongs to prasad patil
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
 
using namespace std;
 
typedef long long int ll;
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
    int b,h;
    cin>>b>>h;
    ll ans=0;
    /*-------------------------------------------*/
    int x;
    cin>>x;
    int barr[x];
    for(int i=0;i<x;i++)
    {
        cin>>barr[i];
    }
      ll d1=0;
   d1=(barr[x-1]-barr[0]);
   
    /*-------------------------------------------*/
     int x1;
    cin>>x1;
    int barr1[x1];
    for(int i=0;i<x1;i++)
    {
        cin>>barr1[i];
    }
      ll d2=0;
     d2=(barr1[x1-1]-barr1[0]);
    
    /*------------------------------------------*/
  
    int y;
    cin>>y;
    int harr[y];
    for(int i=0;i<y;i++)
    {
        cin>>harr[i];
    }
     ll d3=0;
    d3=(harr[y-1]-harr[0]);
   
    /*-----------------------------------------*/
    int y1;
    cin>>y1;
    int harr1[y1];
    for(int i=0;i<y1;i++)
    {
        
        cin>>harr1[i];
    }
    ll d4=0;
   d4=( harr1[y1-1]-harr1[0]);
    
    /*---------------------------------------*/
    ll res1=(d1*h);
    ans=max(ans,res1);
    ll res2=(d2*h);
    ans=max(ans,res2);

    ll res3=(d3*b);
    ans=max(ans,res3);

    ll res4=(d4*b);
    ans=max(ans,res4);

   cout<<ans<<endl;






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