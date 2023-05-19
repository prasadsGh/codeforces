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
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]==0) count++;
    }
    int nonzero=n-count;
    if(nonzero+1>=count)
    {
        cout<<0<<endl;
        return;
    }
    vector<int>temp;
    for(int i=0;i<n;i++)
    {
        if(v[i]!=0)
        {
            temp.push_back(v[i]);
        }
    }
    if(temp.size()==0)
    {
        cout<<1<<endl;
        return;
    }
    sort(temp.begin(),temp.end());
    int i=0;
    while(i<temp.size() && temp[i]==1)
    {
        i++;
    }
    if(i==temp.size())
    {
        cout<<2<<endl;
        return;
    }
    cout<<1<<endl;
   
   
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
