#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t,gcd,n,x;
    cin>>t;
    while (t--){
        cin>>n;
       int a[n];
        int min=a[0];
        for(int i=0;i<=n;i++){
            cin>>a[i];
            if(a[i]<min){
                min=a[i];
                 x=i;
            }
        }
        for(int i=1; i<=min && i<=x; i++){
            if(min%i==0 && x%i==0){
                gcd=i;
            }
        }
        if (gcd==1){
            cout<<x;
        }
    }

return 0;
}
