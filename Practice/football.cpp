#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int flag=0;
    for(int i=0;i<s.size()-1;i++)
    {
        int count=1;
        while(s[i]==s[i+1])
        {
            count++;
            if(count==7)
            {
                flag=1;
                break;
            }
            i++;
        }
    }

    if(flag==0) cout<<"NO\n";

    else cout<<"YES\n";
return 0;
}