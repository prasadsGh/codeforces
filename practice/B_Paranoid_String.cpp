#include<bits/stdc++.h>
using namespace std;

#define int long long
vector<pair<int,int>> vp;

int f(int i,int j,int k){
    cout<<i<<" "<<j<<" "<<k<<endl;
    if(i==4){
        if(k!=0){
            return 0;
        }
        vp.push_back({i,j});
        return 1;
    }
    
    int op1 = 0;
    if(i+1!=5){
        op1 |= f(i+1,j,k+2); 
    }
    int op2 = 0;
    if(j+1<5){
        op2|=f(i,j+1,k*2);
    }
    int op3 = 0;
    if((i!=0)){
        op3 |= f(i-1,j,k-2);
    }
    // int op4 = 0;
    // if(j-1>=0){
    //     op4|=f(i,j-1,k/2);
    // }
    // if(op1){
    //     vp.push_back({i,j});
    //     return 1;
    // }else if(op2){
    //     vp.push_back({i,j});
    //     return 1;
    // }
    // else if(op3){
    //     vp.push_back({i,j});
    //     return 1;
    // }
    // else if(op4){
    //     vp.push_back({i,j});
    //     return 1;
    // }
    return 0;
}

void solve(){
    int n = 5;
    int ans = f(0,0,0);
    /*
    ___________
    |_|_|_|_|_|
    |_|_|_|_|_|
    |_|_|_|_|_|
    |_|_|_|_|_|
    |_|_|_|_|_|
    
    */
   for(auto x:vp){
    cout<<x.first<<" "<<x.second<<endl;
   }
}

signed main(){
    solve();
    return 0;
}