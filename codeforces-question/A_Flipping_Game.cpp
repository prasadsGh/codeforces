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
    for(int i=0;i<n;i++) cin>>v[i];
    int count=0, ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            count=0;
            // cout<<i<<" "<<j<<endl;
            for(int k=0;k<n;k++)
            {
                if(k>=i && k<=j)
                {
                    if(v[k]==1) count++;
                    
                }
                else if(v[k]==1) count--;
                
            }
            // cout<<count<<endl;
            cout<<endl;
            ans=max(ans,j-i+1-count);
        }
    }
    cout<<ans<<endl;

   

}

signed main()
{
          ios_base::sync_with_stdio(false);
             cin.tie(NULL); cout.tie(NULL);
          int t=1; 
          
          while(t--)
          {
            prasad();
          }
          return 0;
}
