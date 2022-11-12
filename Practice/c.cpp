#include <iostream>
using namespace std;
//how to count the set bits in number 
int main()
{
    int n=6;
    int count=0;
    while(n!=0)
    {
        if(n&1==1) count++;
        // else count+=0;
        n=(n>>1);
    }
    cout<<count<<endl;

}
    
