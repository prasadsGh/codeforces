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
    ll mat[n][5];
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<5;j++) cin>>mat[i][j];
    }
    for(ll j=0;j<5;j++)
    {
        for(ll i=j+1;i<5;i++)
        {
            ll count=0, count1=0,count2=0;
            for(ll k=0;k<n;k++)
            {
                if(mat[k][i]==1) count++;
                if(mat[k][j]==1) count1++;
                if(mat[k][j]==0 && mat[k][i]==0) count2++;
            }
            if((count+count1)>=n && count>=((n)/2) &&  count1>=((n)/2) && count2==0)
            {
                cout<<"YES\n";
                return;
            }
            // cout<<count<<" ";
        }
        // cout<<endl;
    }
    cout<<"NO\n";


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