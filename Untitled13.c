#include <bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
long long c,i,a,l,o;
cin>>c>>i>>a>>l>>o;
long long maxtimeword=min({c/1,i/1,a/1,l/2,o/1});
cout<<maxtimeword<<endl;
 }
return 0;
}
