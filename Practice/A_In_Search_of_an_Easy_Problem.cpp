#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        if(k==1) flag=1;
        
    }
    if(flag==0) cout<<"EASY\n";
    else cout<<"HARD\n";
return 0;
}