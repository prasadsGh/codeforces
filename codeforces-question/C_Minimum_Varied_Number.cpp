/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long 
void prasad()
{
    int n; cin>>n;
    string s="";
    if(n<10)
    {
        cout<<n<<endl;
        return;
    }
    int x=9;
    while(n)
    {
    
        while(n>x)
        {
            s=to_string(x)+s;
            n-=x;
            x--;
        }
        s=(to_string(n))+s;
        n=0;
    }
    cout<<s<<endl;
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
