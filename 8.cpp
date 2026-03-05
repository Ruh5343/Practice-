#include <bits/stdc++.h>
using namespace std;
int main(){
long long x;
cin>>x;
string s = to_string(x);
string temp="";
reverse(s.begin(),s.end());
for (int i=0; i<s.size();i++){
if(i>0 && i%3==0){
temp=temp+',';
}
temp=temp+s[i];

}
reverse(temp.begin(),temp.end());
cout<<temp<<endl;
return 0;
}
