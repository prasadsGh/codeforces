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
 

void prasad(){
    ll n; 
    cin>>n;
    string s;
    cin>>s;
    ll cnt=0;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]!='?') flag=1;
        if(s[i]=='?') cnt++;
        else if(s[i]=='R')
        {
            if((cnt%2)==0)
            {
                int temp=0;
                for(int j=0;j<cnt;j++)
                {
                    if((temp%2)==0)
                    {
                        cout<<"R";
                        temp++;
                    } 
                    else
                    {
                        cout<<"B";
                        temp++;
                    }
                    
                }
            }
            else
            {
                int temp=0;
                for(int j=0;j<cnt;j++)
                {
                    if((temp%2)==0)
                    {
                        cout<<"B";
                        temp++;
                    } 
                    else
                    {
                        cout<<"R";
                        temp++;
                    } 
                }

            }
            cout<<"R";
            cnt=0;
        }
        else if(s[i]=='B')
        {
             if((cnt%2)==0)
            {
                int temp=0;
                for(int j=0;j<cnt;j++)
                {
                    if((temp%2)==0)
                    {
                        cout<<"B";
                        temp++;
                    } 
                    else
                    {
                        cout<<"R";
                        temp++;
                    } 
                }
            }
            else
            {
                int temp=0;
                for(int j=0;j<cnt;j++)
                {
                    if((temp%2)==0)
                    {
                        cout<<"R";
                        temp++;
                    } 
                    else
                    {
                        cout<<"B";
                        temp++;
                    }
                    
                } 
            }
            cout<<"B";
            cnt=0;

        }
    }
      int cnt1=0;
    for(int i=(n-1);i>=0;i--)
    {
      
        if(s[i]=='?') cnt1++;
        else if(s[i]=='R')
        {
            if((cnt1%2)==0)
            {
                int temp=0;
                for(int j=0;j<cnt1;j++)
                {
                    if((temp%2)==0)
                    {
                        cout<<"B";
                        temp++;
                    } 
                    else
                    {
                        cout<<"R";
                        temp++;
                    }
                    
                }
            }
            else
            {
                int temp=0;
                for(int j=0;j<cnt1;j++)
                {
                    if((temp%2)==0)
                    {
                        cout<<"B";
                        temp++;
                    } 
                    else
                    {
                        cout<<"R";
                        temp++;
                    } 
                }

            }
                break;

        } 
        else if(s[i]=='B')
        {
            if((cnt1%2)==0)
            {
                int temp=0;
                for(int j=0;j<cnt1;j++)
                {
                    if((temp%2)==0)
                    {
                        cout<<"R";
                        temp++;
                    } 
                    else
                    {
                        cout<<"B";
                        temp++;
                    } 
                }
            }
            else
            {
                int temp=0;
                for(int j=0;j<cnt1;j++)
                {
                    if((temp%2)==0)
                    {
                        cout<<"R";
                        temp++;
                    } 
                    else
                    {
                        cout<<"B";
                        temp++;
                    }
                    
                } 
            }
            break;

        }
    }
    if(flag==0)
    {
      int count=n;
           if((count%2)==0)
            {
                int temp=0;
                for(int j=0;j<count;j++)
                {
                    if((temp%2)==0)
                    {
                        cout<<"B";
                        temp++;
                    } 
                    else
                    {
                        cout<<"R";
                        temp++;
                    } 
                }
            }
            else
            {
                int temp=0;
                for(int j=0;j<count;j++)
                {
                    if((temp%2)==0)
                    {
                        cout<<"R";
                        temp++;
                    } 
                    else
                    {
                        cout<<"B";
                        temp++;
                    }
                    
                } 
            }
      
    }

    cout<<endl;
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