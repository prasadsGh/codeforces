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
    ll m,n; cin>>m>>n;
    ll mat[m+1][n+1],check[m+1][n+1];
    
   for(ll i=0;i<m;i++)
    {
       
        for(ll j=0;j<n;j++)
        {
         cin>>mat[i][j];
         check[i][j]=mat[i][j];
        }
         
    }

    for(ll i=0;i<m;i++)
    {
       
      
        for(ll j=0;j<n;j++)
        {
            // i,n--
            //m,j
            if(mat[i][j]==0)
            {
                mat[i][n]=-1;
                mat[m][j]=-1;
            }
        }
        
    }
    for(ll i=0;i<m;i++)
    {
        for(ll j=0;j<n;j++)
        {
            // i,n--
            //m,j
            if((mat[i][n]==-1) or (mat[m][j]==-1))
            {
                mat[i][j]=0;
            }
            else mat[i][j]=1;
        } 
    }
    ll mat1[m+1][n+1];
    memset(mat1,0,sizeof(mat1));
    for(ll i=0;i<m;i++)
    {
        for(ll j=0;j<n;j++)
        {
            
            if(mat[i][j]==1)
            {
                mat1[i][n]=-1;
                mat1[m][j]=-1;
            }
            
        }
    }
    for(ll i=0;i<m;i++)
    {
        for(ll j=0;j<n;j++)
        {
            
            if(mat1[i][n]==-1 or mat1[m][j]==-1)
            {
               mat1[i][j]=1;
            }
            
        }
    }
      for(ll i=0;i<m;i++)
    {
        for(ll j=0;j<n;j++)
        {
            if(mat1[i][j]!=check[i][j])
            {
                cout<<"NO\n";
                return;
            }
            
        }
    }
    
   
    cout<<"YES\n";
    for(ll i=0;i<m;i++)
    {
       
        for(ll j=0;j<n;j++)
        {
            // i,n--
            //m,j
           cout<<mat[i][j]<<" ";
        }
        cout<<endl;
        
    }

    
    



}
int main()
{
ll t=1;
// cin>>t;
while(t--)
{
dontquit();
}
return 0;
}