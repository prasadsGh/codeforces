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
    set<char>s1;
    if(n==1)
    {
        s1.insert(s[0]);
    }
    else 
    {
        // if(s[0]!=s[1]) 
        // {
        //     s1.insert(s[0]);
        // }
        // if(s[n-2]!=s[n-1])s1.insert(s[n-1]);
        for(int i=0;i<n;i++)
        {
            if(s[i]==s[i+1])
            {
                i++;
                continue;
            }
            else {
                s1.insert(s[i]);
            }
        }
    }
   vector<char>v(all(s1));
   for(ll i=0;i<v.size();i++) cout<<v[i];
   cout<<endl;

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