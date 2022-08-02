//Maximums

#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int a[n];
  int b[n];
  for(int i=0;i<n;i++){
    cin>>b[i];
  }
  int m=b[0];
  a[0]=b[0];
  for(int i=1;i<n;i++){
    m =max(m,a[i-1]);
    a[i]=b[i]+m;
  }
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
  return 0;
}