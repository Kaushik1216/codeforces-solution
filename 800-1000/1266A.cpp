// 1000A competative programmer

#include<bits/stdc++.h>
using namespace std;
 
void solve(){
  string n;
  cin>>n;
  int even=0;
  int digit=0;
  int zero=0;
  
  for(int i=0;i<(n.length());i++){
      digit = digit +((int)(n[i]-'0'));
      if(((int)(n[i]-'0'))%2==0 && n[i]!='0'){
        even++;
      }
      if(n[i]=='0'){
        zero++;
      }
  }
  
  if(((digit%3==0) && (even>0) && zero>0)){
    cout<<"red"<<endl;
  }
  else if(digit==0){
    cout<<"red"<<endl;
  }
  else if(((digit%3==0) && zero>1)){
    cout<<"red"<<endl;
  }
  else{
    cout<<"cyan"<<endl;
  }
  return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}