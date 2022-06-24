#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    //incomplete
    set<char> v;
    int k=s.size();
    sort(&s[0],&s[0]+k);
    int count=1,flag=0;
    for(int i=0;i<k;i++)
    {
        int count=1;
        while(s[i]==s[i+1])
        {
            count++;
        }
        if(count!=n) flag=1;

    }
    for(int i=0;i<k;i++)
    {
        v.insert(s[i]);
    }
    int m=v.size();
    if(m==n && flag==0)
    {
        int z=(k/m);
        for(int i=0;i<z;i++)
        {
            for(char x:v)
            {
                cout<<x;
            }
        }
        cout<<endl;


    }
    else cout<<"-1\n";
return 0;
}