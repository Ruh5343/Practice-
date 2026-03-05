#include <bits/stdc++.h>
using namespace std;
int main(){
int t,n;
cin>>t;
while(t--){
        cin>>n;
    int a[n];
    bool odd = false, even = false;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if (a[i]%2==0){
            even=true;
        }
        else{
            odd=true;
        }
    }
    if(even && odd){
        sort(a,a+n);
    }
    for(int i=0;i<n;i++){
            if(i==(n-1)){
                cout<<a[i]<<" ";
            } else{
        cout<<a[i]<<endl;
            }
    }
}
return 0;
}
