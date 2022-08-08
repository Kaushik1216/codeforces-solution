//1000B Diffrent divisitor
#include<bits/stdc++.h>
using namespace std;
 
int prime(int a){
     int count;
     while(1){
      count=1;
      for(int i=2;i<=sqrt(a);i++){
        if(a%i==0){
          count=0;
          break;
        }
      }
      if(count){
        return a;
      }
      else{
        a++;
      }
     }
}
void solve(){
   int d;
   cin>>d;
  long long int a[2];
  a[0]=prime(1+d);a[1]=prime(d+a[0]);
   cout<<min(1ll*a[0]*a[1],1ll*a[0]*a[0]*a[0])<<endl;
   
}
 
int main(){
  int t;
  cin>>t;
  while(t--){
   solve();
  }
  return 0;
}