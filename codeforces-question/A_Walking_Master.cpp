/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long 
void prasad()
{
    int x,y,a,b; cin>>x>>y>>a>>b;
    int a1=abs(y-b);
    int b1=abs(x+a1-a);
    int temp= a1+b1;
    if(x+a1<a or b<y)
    {
        cout<<-1<<endl;
        return;
    }
   cout<<abs(a1+b1)<<endl;
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
