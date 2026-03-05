#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m, t;
cin>>t;
while(t--){
        m=0;
        cin>>n;
int c[n];
for(int i=0; i<n; i++){
    cin>>c[i];
}
for (int i=0;i<n;i++){
    for(int j=0; j<n;j++){
        if (c[i]!=c[j]){
            m++;
        }else{
        continue;
        }
    }
}
cout<<m/n<<endl;
}


return 0;
}
