#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    int i=n-2;
    bool b=false;
    int count=0;
    if(n!=1){
     while(i>=0){
        while(a[i]>=a[i+1] && a[i]>0){
         a[i] = a[i]/2;
         count = count+1;
        }
      
      
      if(a[i]==a[i+1]){
        b=true;
        break;
      }

      i--;
    }
    }
    if(n==1){
      cout<<0<<endl;
    }
    else if(b){
      cout<<-1<<endl;
    }
    else{
      cout<<count<<endl;
    }
    
  }
  
  return 0;
}