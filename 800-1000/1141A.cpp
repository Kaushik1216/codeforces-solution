#include<bits/stdc++.h>
using namespace std;

int main(){
  long long int n;
  long long int m;
  cin>>n>>m;
  int a = (m/n);
  bool b=true;
  int count=0;
  if(a*n == m){
    while(a!=1){
      if(a%2==0){
        a = a/2;
        count ++;
      }
      else if(a%3 ==0){
        a = a/3;
        count = count +1;
      }
      else{
        break;
      }

    } 
     }
     else{
      
      b=false;
      cout<<-1<<endl;
     }
     
     if(b){
     if(a==1){
        cout<<count<<endl;
      }
      else{
        cout<<-1<<endl;
      }
     }
  return 0;
}