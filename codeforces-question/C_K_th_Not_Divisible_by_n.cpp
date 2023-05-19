/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long 
void prasad()
{
    int n,k; cin>>n>>k;
    if(k<n)
    {
        cout<<k<<endl;
        return;
    }
   //now we have to calculate by how many times we have shifted the answer
   //to right 
   int temp= (k-1)/(n-1);
   k+=temp;
   cout<<k<<endl;

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
