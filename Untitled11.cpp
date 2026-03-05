#include<bits/stdc++.h>
using namespace std;
int main(){
int p;
cin>>p;
while(p--){
int n;
string s,t;
cin>>n;
cin>>s>>t;
sort(s.begin(), s.end());
sort(t.begin(), t.end());
if(s==t){
cout<<"Yes"<<endl;
}else{
cout<<"No"<<endl;
}
}
return 0;
}
