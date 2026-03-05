#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
int n,m,d;
int c=0;
cin>>t;
while(t--){
    cin>>n>>m>>d;
    int a=n*m;
    while(a<d){
        c++;
    }
}
cout<<c<<endl;
return 0;
}

