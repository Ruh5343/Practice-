#include <bits/stdc++.h>
using namespace std;
int main(){
int n, key, found=0;
cout<<"Array elements number: "<<endl;
cin>>n;
cout<<"Enter the key number: "<<endl;

cin>>key;
int a[n];
cout<<"Array numbers: "<<endl;

for(int i=0; i<n; i++){
      cin>>a[i];
}

sort (a, a+n);

int mid= n/2;

      if(a[mid]==key){
            cout<<"value found at index "<<mid<<endl;
            found=1;

      }


     else if(a[mid]>key){
            for(int i=0;i<mid; i++){
                  if(a[i]==key){
                        cout<<"value found at index "<<i<<endl;
                        cout<<"complexity is  "<<i+1<<endl;
                        found=1;
                        break;
                  }
            }
      }

      else{
            for(int i=mid+1;i<n; i++){
                  if(a[i]==key){
                        cout<<"value found at index "<<i<<endl;
                        cout<<"Complexity is "<<i<<endl;
                        found=1;
                        break;
                  }
            }
      }
      if(!found)
            {
            cout<<"Not found"<<endl;
            cout<<"Complexity "<<n<<endl;
      }



return 0;
}
