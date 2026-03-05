#include <bits/stdc++.h>
using namespace std;
int main(){
int n,m,z;
cin>>n>>m;
if (n%2==0){
        z=n/2;
if(z>=m){
    cout<<"Yes"<<endl;

}
else {

    cout<<"No"<<endl;
}}
if(n%2!=0){
    z=(n+1)/2;
    if(z>=m){
    cout<<"Yes"<<endl;

}
else {

    cout<<"No"<<endl;
}
}
return 0;
}
