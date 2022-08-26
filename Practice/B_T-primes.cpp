//this code belongs to prasad patil
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
//this code belongs to prasad patil
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
 
using namespace std;
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------
//function to get the product of very ver large number
string multiply(string num1, string num2)
{
 int len1 = num1.size();
int len2 = num2.size();
if (len1 == 0 || len2 == 0)
return "0";
vector<int> result(len1 + len2, 0);
int i_n1 = 0;
int i_n2 = 0;
 for (int i=len1-1; i>=0; i--)
 {
int carry = 0;
int n1 = num1[i] - '0';
i_n2 = 0;
 for (int j=len2-1; j>=0; j--)
 {
int n2 = num2[j] - '0';
int sum = n1*n2 + result[i_n1 + i_n2] + carry;
carry = sum/10;
result[i_n1 + i_n2] = sum % 10;
i_n2++;
}
if (carry > 0)
result[i_n1 + i_n2] += carry;
i_n1++;
}
int i = result.size() - 1;
while (i>=0 && result[i] == 0)
i--;
if (i == -1)
return "0";
string s = "";
while (i >= 0)
s += std::to_string(result[i--]);
return s;
}
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 
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

bool isprime(ll n)
{
    if(n==2) return true;
    if(n==3) return true;
    if(n==5) return true;
    if((n%2)==0 or (n%3)==0 or (n%5)==0) return false;
    for(int i=5;(i*i)<=n;i+=6)
    {
        if((n%i)==0 or (n%(i+2))==0) return false;
    }
    return true;
}
 

void prasad(){
    ll n;
    cin>>n;
    ll count=0;
   
    ll temp=sqrt(n);
    ll temp1=(temp*temp);
    if(n==1)
    {
        cout<<"NO\n";
    }
    else if(temp1!=n)
    {
        cout<<"NO\n";
        return;
    }
    else
    {
        if(isprime(temp)) 
        {
            cout<<"YES\n";
            return;
        }
        else
        {
            cout<<"NO\n";
            return ;
        }
    }
    // cout<<temp<<endl;
    // if(isprime(temp))
    // {
    //     cout<<"YES\n";
    //     return ;
    // }
    // else
    // {
    //     cout<<"NO\n";
    //     cout<<endl;
    // }
    // // for(int i=2;(i*i)<=n;i++)
    // {
    //     if((n%i)==0)
    //     {   

    //        if(isprime(i)&& (i==(n/i)))
    //        {
    //         cout<<"YES\n";
    //         return ;
    //        }
    //        else 
    //        {
    //         cout<<"NO\n";
    //         return;
            
    //        }

    //     }
    // }
    

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