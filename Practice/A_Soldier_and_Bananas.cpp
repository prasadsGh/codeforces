#include <bits/stdc++.h>
using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;
    long long  r=(((w)*(w+1)*k)/2);
   if((r-n)<0) cout<<"0\n";
   else cout<<(r-n)<<endl;
return 0;
}