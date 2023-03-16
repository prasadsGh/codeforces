/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void prasad()
{
    ll n,a,b; cin>>n>>a>>b;
    vector<ll>a1,b1;
    ll i=n,j=1;
    a1.push_back(a);// min
    b1.push_back(b);

    while(i>j)
    {
        if(i!=a && i!=b)
        {
            a1.push_back(i);
        }
        if(j!=b && j!=a)
        {
            b1.push_back(j);
        }
            i--;
            j++;

    }
    ll mn=*min_element(a1.begin(),a1.end());
    ll mx=*max_element(b1.begin(),b1.end());
    if(mn!=a or mx!=b)
    {
        cout<<-1<<endl;
        return;
    }
    if(a1.size()!=(n/2) or (b1.size()!=(n/2)))
    {
        cout<<-1<<endl;
        return;
    }
    for(auto i:a1) cout<<i<<" ";
    for(auto i:b1) cout<<i<<" ";
    cout<<endl;

}

int main()
{
          ios_base::sync_with_stdio(false);
      cin.tie(NULL); cout.tie(NULL);
          ll t; cin>>t;
          while(t--)
          {
            prasad();
          }
          return 0;
}
