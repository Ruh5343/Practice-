#include <bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
for(int i=0; i<s.size(); i++){
s[i]=tolower(s[i]);
}
vector<string>s;
s.push_front("of");
for (string a:s){
cout<<a<<endl;
}
return 0;
}

