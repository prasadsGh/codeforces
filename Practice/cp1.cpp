#include <iostream>
#include <vector>
using namespace std;
void Fun(int i,vector<int>arr,vector<int>print,int n)
{
    if(i>=n)
    {
        for(int i=0;i<print.size();i++)
        {
            cout<<print[i]<<" ";
        }
        if(print.size()==0)
        {
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    print.push_back(arr[i]);
    Fun(i+1,arr,print,n);
    print.pop_back();
    Fun(i+1,arr,print,n);
    
}
int main() {
    int n ; cin>>n;
    vector<int>arr(n);
    vector<int>print;
    for(int i=0;i<n;i++) cin>>arr[i];
    
   Fun(0,arr,print,n);
    
    return 0;
}