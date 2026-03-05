#include<bits/stdc++.h>
using namespace std;
int main(){
int n, t;
cin>>t;
while(t--){
        cin>>n;
set<int>p;

int c;
for(int i=0; i<n; i++){
    cin>>c;
    p.insert(c);
}
cout<<p.size()<<endl;
}
return 0;
}

