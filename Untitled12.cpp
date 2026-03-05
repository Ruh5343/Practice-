#include <bits/stdc++.h>
using namespace std;
int main (){
int n;
cin>>n;
if(n==0||n==1){
cout<<n<<" is not a prime number.";
}else{
for(int i=2;i<=(n/2);i++){
if(n%i==0){
cout<<n<<" is not a prime.";
break;
}else{
cout<<n<<" is prime";
break;
}
}
}
return 0;
}
