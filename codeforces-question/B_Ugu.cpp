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
    string s; cin>>s;
    ll temp=-1;
    if(is_sorted(s.begin(),s.end())) cout<<0<<endl;
    else
    {
        ll cost=1;
        for(int i=0;i+1<n;i++)
        {
            if(s[i]=='1' and s[i+1]=='0')
            {
                temp=(i+1);
                break;
            }
        }
        for(int i=temp;i+1<n;i++)
        {
            if(s[i]=='1' && s[i+1]=='0') cost+=2;
        }
        if(s[n-1]=='1') cost++;
        cout<<cost<<endl;
    }
    


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