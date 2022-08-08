//1000A Heating
#include<bits/stdc++.h>
using namespace std;
 
void solve(){
  int c,s,n;
  cin>>c>>s;
  if(s<c){
    cout<<(s)<<endl;
  }
  else{
    n=ceil(s*(1.0)/c)-1;
    int b[c];
    for(int i=0;i<c;i++){b[i]=n;s=s-b[i];}
    if(s>0){
      int i=0;
      while(s!=0){
        b[i]=b[i]+1;
        s--;
        if(i==c){
          i=0;
        }
        else{
          i++;
        }
        
      }
    }
    long long int h=0;
    for(int i=0;i<c;i++){
      h = h+(b[i]*b[i]);
      
    }
    cout<<h<<endl;
 
  }
}
 
int main(){
  int t;
  cin>>t;
  while(t--){
   solve();
  }
  return 0;
}