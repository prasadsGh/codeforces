#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5][5],k,m;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
                k=i,m=j;
            }
        }
    }
    cout<<(abs(k-2)+abs(m-2))<<endl;
return 0;
}