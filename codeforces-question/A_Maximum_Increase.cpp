#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        arr.push_back(k);
    }
    int count=1,temp=1;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]>arr[i])
        {
            count++;
            temp=max(temp,count);
        }
        else if(arr[i+1]<=arr[i])
        {
            count=1;
        }
    }
    cout<<temp<<endl;
return 0;
}