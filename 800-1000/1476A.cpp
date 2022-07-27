#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n,k;
  cin>>n>>k;
  if(n==1){
    cout<<k<<endl;
    return ;
  }
  if(n==k){
    cout<<1<<endl;
    return ;
  }
  if(n<k){
    int a=k/n;
    int b=k%n;
    if(b!=0) a++;
    cout<<a<<endl;
    return ;
  }
  else{
    int c=n/k;
    int d=n%k;
    if(d!=0) c++;
    k*=c;
    int a=k/n;
    int b=k%n;
    if(b!=0) a++;
    cout<<a<<endl;
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