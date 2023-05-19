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
    ll n; cin>>n;
    char c; cin>>c;
    string s; cin>>s;
    s+=s;
    // cout<<s<<endl;
    ll ans=0, count=0;
    n=s.length();
    if(c=='g')
    {
        cout<<0<<endl;
        return;
    }
    ll flag=0;
    for(ll i=0;i<n;i++)
    {
        if(s[i]==c && flag==0)
        {
            count=1;  
            flag=1;   
        }
        else if(s[i]=='g' && flag==1)
        {
            ans=max(ans,count);
            flag=0;
        }
        else count++;
    }
    cout<<ans<<endl;


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