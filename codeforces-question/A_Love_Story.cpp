/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long 
void prasad()
{
  int n1,m; cin>>n1>>m;

  int n= n1*m;
  vector<int>v1(n);
  
  for(int i=0;i<n;i++)
  {
    cin>>v1[i];
  }
  sort(v1.begin(),v1.end());
  int flag=0;
  if(v1[0]==v1[1]) flag=1;
  int v[n][m];
  int maxi= v1[n-1];
  int mini=v1[0];
  int secondmaxi=v1[n-2];

  if(flag)
  {
    v[0][0]=maxi;
    
  }
  
}

signed main()
{
          ios_base::sync_with_stdio(false);
           cin.tie(NULL); cout.tie(NULL);
          int t=1; 
          cin>>t; 
          while(t--)
          {
            prasad();
          }
          return 0;
}
