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
    ll a,b,x,y,n;
    cin>>a>>b>>x>>y>>n;
    ll temp1=(a-x);
    ll temp2=(b-y);
   ll a1=a,b1=b; 
    ll n1=n;
   a-=min(temp1,n);
   n-=min(temp1,n);

   b-=min(temp2,n);
   n-=min(temp2,n);
   ll p1=(a*b);
    // cout<<a<<" "<<b<<endl; 
       a=a1,b=b1;
       n=n1;
    b-=min(temp2,n);
    n-=min(temp2,n);
    a-=min(temp1,n);
    n-=min(temp1,n);
    ll p2=(a*b);
    // cout<<a<<" "<<b<<endl;
    cout<<min(p1,p2)<<endl;
    // cout<<" -------------\n";
    
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