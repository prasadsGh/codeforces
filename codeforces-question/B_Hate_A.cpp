/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long 
void prasad()
{
    string s;
    cin>>s;
    vector<int>v;
    int temp=-1;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='a') 
        {
            v.push_back(i);
            temp=i;
        }
    }
    int n=v.size();
    if(n==0)
    {
        cout<<s<<endl;
        return;
    }
    else if(n&1)
    {
        cout<<":("<<endl;
        return;
    }
    else
    {
        
        int i=0,j=(n/2);
      
        while(i<(n/2) && (j<n))
        {
            if(s[v[i]]!=s[v[j]])
            {
                cout<<":("<<endl;
                return;
            }
            i++;
            j++;
        }
        // ababacacbbcc
        //  2 4 6 8 9 10 11 12
 
        int m=s.length();
        int i1=m-1;
        int j1=((v.size())/2)-1;
        while(j1>=0)
        {
            if(s[i1]!=s[v[j1]])
            {
                cout<<":("<<endl;
                return;
            }
            i1--;
            j1--;

        }
        int temp1=v[n/2];
        for(int i=0;i<temp1;i++)
        {
            cout<<s[i];
        }
        cout<<endl;

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
