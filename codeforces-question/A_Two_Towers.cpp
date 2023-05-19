/* author:prasad patil
   codeforces:rocklee07
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define vll vector<ll>
#define fori(n) for(int i=0;i<n;i++)
#define pb push_back
ll MOD9 = 998244353;
ll mod1e9 = 1000000007;
#define dbg(x) cout << #x << " = " << x << ln
#define INF 2e18
#define all(x) (x).begin(), (x).end()
//"this is code of prasads_cf"

//-----------------------MODULAR INVERSION -----------------
ll inv(ll r){if(r==1) return 1;return (mod1e9-((mod1e9/r) *inv(mod1e9%r))%mod1e9+mod1e9)%mod1e9;}
//---------------------SIEVE OF ERATOSTHENES-----------------
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)
if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
//-----------------------BINARY EXPONTIATION----------------------
ll power(ll a,ll n){ ll res=1; while(n){if(n%2){res*=a;n--;}else{a*=a;n/=2;}} return res;}
//----------------------code begines here-----------------------
void dontquit()
{  
ll n,m; cin>>n>>m;
string a,b; cin>>a>>b;
reverse(all(a));
reverse(all(b));
int i=0,j=0;
if(n>=2 && m>=2)
{
    if(a[0]==a[1] && (a[0]==b[0]))
    {
        cout<<"NO\n";
        return;
    }
    if((b[0]==b[1])&&(b[0]==a[0]))
    {
        cout<<"NO\n";
        return;
    }
    int count=0;
    for(int i=0;i+1<n;i++)
    {
        if(a[i]==a[i+1]) count++;
    }
    for(int i=0;i<m;i++)
    {
        if(b[i]==b[i+1]) count++;
    }
    if(count>1)
    {
        cout<<"NO\n";
        return;
    }
     if(count==1 && b[0]==a[0])
    {
        cout<<"NO\n";
        return;
    }
}
else 
{
    if( (m==1) &&  a[0]==a[1] && (a[0]==b[0]))
    {
        cout<<"NO\n";
        return;
    }
    if((n==1)&&(b[0]==b[1])&&(b[0]==a[0]))
    {
        cout<<"NO\n";
        return;
    }
    int count=0;
    for(int i=0;i+1<n;i++)
    {
        if(a[i]==a[i+1]) count++;
    }
    for(int i=0;i<m;i++)
    {
        if(b[i]==b[i+1]) count++;
    }
    if(count>1)
    {
        cout<<"NO\n";
        return;
    }
    if(count==1 && b[0]==a[0])
    {
        cout<<"NO\n";
        return;
    }

    
}
cout<<"YES\n";

  

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