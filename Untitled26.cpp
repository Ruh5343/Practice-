#include <bits/stdc++.h>
using namespace std;
int main(){
char s[10];
for(int i=1; i<=10;i++){
    cin>>s[i];
}
for(int i=1; i<=10; i++){
s[i]=tolower(s[i]);
}
cout<<"of";
for(int i=1; i<=10;i++){
    cout<<s[i];
}
return 0;
}
