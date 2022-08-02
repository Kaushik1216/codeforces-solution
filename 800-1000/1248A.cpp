//1000A integer point
#include<bits/stdc++.h>
using namespace std;
 
void solve(){
  long long int n,m;
  cin>>n;
  long long int a[n];
  long long int even1=0,odd1=0,even2=0,odd2=0;
  long long int count;
  for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]%2==0){
      even1++;
    }
    else{
      odd1++;
    }
  }
  cin>>m;
  long long int b[m];
  for(int i=0;i<m;i++){
    cin>>b[i];
    if(b[i]%2==0){
      even2++;
    }else{
      odd2++;
    }
  }
  count=((odd1*odd2)+(even1*even2));
 
  cout<<count<<endl;
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