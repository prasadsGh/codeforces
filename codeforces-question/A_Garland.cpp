/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long 
void prasad()
{
    string s; cin>>s;
    int count=0;

    for(int i=0;i<4;i++)
    {
        count=0;
        for(int j=0;j<4;j++)
        {
            if(s[i]==s[j]) count++;
        }
        if(count==4)
        {
            cout<<-1<<endl;
            return;
        }
        if(count>2)
        {
            cout<<6<<endl;
            return;
        }
        
    }
    cout<<4<<endl;
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
