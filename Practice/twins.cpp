#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v;
    int k,sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        v.push_back(k);
        sum+=k;
    }
    // for(int x:v) cout<<x<<" ";
    sort(v.begin(),v.end());
    int count=0;
    int j=n-1,sum1=0;
    while(sum1<=(sum/2))
    {
        sum1+=v[j];
        j--;
        count++;

    }
    cout<<count<<endl;
    
return 0;
}