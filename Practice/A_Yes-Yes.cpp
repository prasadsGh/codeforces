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
    string s; cin>>s;
    ll n= s.length();
    if(n==1 && (s[0]!='e' && s[0]!='Y' && s[0]!='s') )
    {
        cout<<"NO\n";
        return;
    }
    else if(n==1)
    {
        cout<<"YES"<<endl;
        return;
    }
    for(int i=0;i+1<n;i++)
    {
        if((s[i]!='e' && s[i]!='Y' && s[i]!='s'))
        {
            cout<<"NO\n";
            return;
        }
        if((i!=n-1 && s[i]=='Y' && s[i+1]!='e'))
        {
            cout<<"NO\n";
            return;
        }
        if(i!=n-1 && s[i]=='e'&& s[i+1]!='s')
        {
            cout<<"NO\n";
            return;
        }
        if(i!=n-1 && s[i]=='s' && s[i+1]!='Y')
        {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
    return;


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