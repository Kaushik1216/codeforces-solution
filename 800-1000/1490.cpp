//1000B Balanced Remainder
#include<bits/stdc++.h>
using namespace std;
 
void solve(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){cin>>a[i];}
  int p=n/3;
  int b[3]={0,0,0};
  for(int i=0;i<n;i++){
    if(a[i]%3==0){
        b[0]=b[0]+1;
    }else if(a[i]%3==1){
      b[1]=b[1]+1;
    }else{
      b[2]=b[2]+1;
    }
  }
  int count=0;
  while(1){
     auto i=(*max_element(b,b+3));
     auto d=find(b,b+3,i)-b;
     
     if(d==0){
      while(b[0]!=p){
        count++;
        b[0]=b[0]-1;
        b[1]=b[1]+1;
      }
     }else  if(d==1){
      while(b[1]!=p){
        count++;
        b[1]=b[1]-1;
        b[2]=b[2]+1;
      }
     }else  if(d==2){
      while(b[2]!=p){
        count++;
        b[2]=b[2]-1;
        b[0]=b[0]+1;
      }
     } 
    if(b[0]==p && b[1]==p && b[2]==p){
      break;
    }
  }
  cout<<count<<endl;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}