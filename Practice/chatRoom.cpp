#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<char> v;
    long long k=s.size();
    int i=0;
    // int m=5,f1=1,f2=1,f3=1,f4=1,f5=1;
    while(i!=(k))
    {
        
        if(s[i]=='h')
        {
            v.push_back(s[i]);
            i++;
          
             break;
           
        }
         i++;
    }
    while(i!=k)
    {
         if(s[i]=='e')
        {
             v.push_back(s[i]);
             i++;
            
              break;

        }
        i++;
    }
    while(i!=k)
    {
         if(s[i]=='l')
        {
             v.push_back(s[i]);
             i++;
            
              break;
        }
        i++;
    }
    while(i!=k) 
    {
        if(s[i]=='l')
        {
             v.push_back(s[i]);
            i++;
             break;
        }
        i++;

    }
    while(i!=k)
    {
        if(s[i]=='o')
        {   
             v.push_back(s[i]);
             i++;
            
              break;

        }
        i++;
   

    } 
    vector<char>v1={'h','e','l','l','o'};
    if(v==v1) cout<<"YES\n";
    else cout<<"NO\n";
        
    
    
   

    

return 0;
}