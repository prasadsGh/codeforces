#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int arr[4];
        for(int i=0;i<4;i++)
        {
            cin>>arr[i];
        }
        int temp=arr[0];
        sort(arr,arr+4);
        int res=0;
       for(int i=0;i<4;i++)
       {
        if(arr[i]==temp)
        {
            res=i;
            break;
        }

       }
       cout<<4-(res+1)<<endl;

    }
return 0;
}