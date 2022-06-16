#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long temp=n;
    vector<int> v;

    while(temp>0)
    {
        int k=temp%10;
        if(k>=5 && n>9) 
        {
            
            if(temp==9 ) v.push_back(9);
            else v.push_back(9-k);

            }
        else v.push_back(k);
        temp/=10;
    }
    for(auto i=(v.end()-1);i>=v.begin();i--)
    {
        cout<<(*i);

    }
    cout<<endl;
    return 0;
}