//fair number
#include<bits/stdc++.h>
using namespace std;

void solve(){
  long long int n;
  cin>>n;
  long long int t=n;
  int rem;
  int count=0;
  while(t!=0){
     rem = t%10;
      if(rem==0){
      count++;
     }
      else if(n%rem==0 ){
      count++;
     }
     t =t /10;
  }
  if(count==(to_string(n).length())){
    cout<<n<<endl;
    return;
  }
  count=0;
  t=n;
  while(t!=0){
      rem = t%10;
      t=t/10;
   
     if(rem==0){
      count++;
     }
      else if(n%rem==0 ){
      count++;
     }
     else{
      count=0;
      n=n+1;
      t=n;
     }
  }

  cout<<n<<endl;
  return ;
  
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}