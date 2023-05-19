/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long 
void prasad()
{
    int n; cin>>n;
    vector<int>v(n);
   for(int i=0;i<n;i++)
   cin>>v[i];
   for(int ans=0;ans<=100;ans++)
   {
      int count=0;
      for(int i=0;i<n;i++)
      {
         if(v[i]>ans)
         {
            count++;
         }
      }
      if(count==ans)
      {
         cout<<ans<<endl;
         return;
      }
   }
   cout<<-1<<endl;
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
