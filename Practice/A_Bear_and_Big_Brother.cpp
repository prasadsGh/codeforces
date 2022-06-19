#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int count=0;
    // int d=b-a;
    while(a<=b)
    {
        b*=2;
        a*=3;
        count++;
    }
    cout<<count<<endl;

return 0;
}