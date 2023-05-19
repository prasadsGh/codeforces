/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long 
void prasad()
{
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if(x1!=x2 && y1!=y2 && abs(x1-x2)!=abs(y1-y2))
    {
        cout<<-1<<endl;
        return;
    }
    else if(x1==x2)
    {
       cout<<x1+abs(y1-y2)<<" "<<y1<<" "<<x2+abs(y1-y2)<<" "<<y2<<endl;
    }
    else if(y1==y2)
    {
        cout<<x1<<" "<<y1+abs(x1-x2)<<" "<<x2<<" "<<y2+abs(x1-x2)<<endl;
    }
    else 
    {
       cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<endl;
    }
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
