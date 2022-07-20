#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int tem;
    vector<int> a;
    for(int i=0;i<n;i++){
      cin>>tem;
      a.push_back(tem);
    }
    int m;
    cin>>m;
    vector<int> b;
    for(int i=0;i<m;i++){
      cin>>tem;
      b.push_back(tem);
    }
    partial_sum(a.begin(),a.end(),a.begin());
    partial_sum(b.begin(),b.end(),b.begin());
    cout<<(max(0,*max_element(a.begin(),a.end()))+max(0,*max_element(b.begin(),b.end())))<<endl;
  }
  return 0;
}