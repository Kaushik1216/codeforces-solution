//Make it Divisible by 25
#include<bits/stdc++.h>
using namespace std;

void solve(){
  long long int n;
  cin>>n;
  if(n%25==0){
    cout<<0<<endl;
  }
  else{
  string s=(to_string(n));
  reverse(s.begin(),s.end());
  int end=0;
   int p,q;
   bool t=true;
  for(int i=0;i<(s.length());i++){
    if(t){
      if(s[i]=='0'){
        t=false;
      }
    }else{
      if(s[i]=='0' || s[i]=='5'){
        end=i;
        break;
      }
    }
  } 
  p =(end-1);
  end=0;
  t=true;
  for(int i=0;i<(s.length());i++){
    if(t){
      if(s[i]=='5'){
        t=false;
      }
    }else{
      if(s[i]=='2' || s[i]=='7'){
        end=i;
        break;
      }
    }
  } 
  q=end-1;
  if(p==-1){
    p=INT_MAX;
  }
  if(q==-1){
    q=INT_MAX;
  }
  cout<<min(p,q)<<endl;
  return ;
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