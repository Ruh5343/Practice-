#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a,b,z;
    cin>>t;
    while (t--)
    {
        cin>>n>>a>>b;
        z=a-b;
        while(n>=a)
        {

            n=n-z;
        }
        cout<<n<<endl;
    }
    return 0;
}

