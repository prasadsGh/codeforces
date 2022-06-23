#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        vector<char>v;
        int n=s.size();
        int cnt=1;
        for(int i=0;i<n;i++)
        {
            if(s[i]==s[i+1])
            {
                cnt++;
                i++;
            } 
            if(s[i]=='0')
            {
                v.push_back(-1*cnt);
            }
            else v.push_back(cnt);
            cnt=1;

        }
        int temp=0,temp1=0;
        for(int i=0;i<n-2;i++)
        {
            if(v[i]>0 && v[i+2]>0 && v[i+1]<0)
            {
                temp=max(temp,v[i]+v[i+2]);
                temp1=(-1*v[i+1]);
                
            }

        }
        cout<<temp1<<endl;
        
    }
return 0;
}