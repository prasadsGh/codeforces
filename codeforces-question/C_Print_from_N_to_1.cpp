#include <iostream>
using namespace std;
void prasad(int n)
{
    if(n==1)
    {
        cout<<1<<endl;
        return ;
    }
    cout<<n<<" ";

    prasad(n-1);
}
int main()
{
    int n;
    cin>>n;
    prasad(n);
    return 0;
}