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
 

void solve(){
   

}

int main()
{
 fast_cin();
//  ll t;
//  cin >> t;
//  while(t--) {
// solve();
//  }
// solve();
 int n,m;
    cin>>n>>m;
    char v[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           cin>>v[i][j];
        }
    }
    int arr[m];
    long long sum=0;
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
        
    }
    // for(int i=0;i<m;i++)
    // {
    //     sum+=arr[i];
    char ans[m]=
    for(int j=0;j<m;j++)
    {
        int count_A=0,count_B=0,count_C=0,count_C=0,count_D=0,count_E=0;
        for(int i=0;i<n;i++)
        {
            if(v[i][j]=='A') count_A++;
            else if(v[i][j]=='B') count_B++;
            else if(v[i][j]=='C') count_C++;
            else if(v[i][j]=='D') count_D++;
            else if(v[i][j]=='E') count_E++;

        }
        int k=max(max(max(count_A,count_B),max(count_C,count_D)),count_E);
        if(k==)

    }
    // }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(v[i][j]==v[0][j])
            {
                sum+=arr[j];
            }
        }
    }
    cout<<sum<<endl;

 return 0;
}