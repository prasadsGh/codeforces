#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
   int i=1;
  int k=1;
   while(k<=n)
   {
   
  cout<<s[k-1];
   k+=i;
  i++;
    
   }
   cout<<endl;
return 0;
}