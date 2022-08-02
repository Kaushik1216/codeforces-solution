// sum of medians

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
  cin>>n>>k;
 
  int a[(n*k)];
  int t=0;
 for(int i=0;i<(k*n);i++){
  cin>>t;
  a[i]=t;

 }
 
 long long int s=0;
  if(n==2){
  for(int i=0;i<(n*k);i++){
    s =s+a[i];
    i++;
  }cout<<s<<endl;
    return ;
 }else{
  int interval =(n+1)/2;
   interval = n-interval;
   interval++;
   int x=1;
   int count=0;
   for(int i=(n*k)-1;i>=0;i--){
    if(x%interval==0){
      s+=a[i];
      count++;
    }
    x++;
    if(count>=k){
      cout<<s<<endl;
      return ;
    }
   }
  cout<<s<<endl;
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