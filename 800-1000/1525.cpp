//1525B - Permutation Sort
#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
     vector<int>l;
     int tem;
     for(int i=0;i<n;i++){
        cin>>tem;
        l.push_back(tem);
        
     } 
    int count=2;
    if(is_sorted(l.begin(),l.end())){
        count=0;
    }
    else if(l[0]==1 || l[n-1]==n){
        count=1;
    }
    else if(l[0]==n && l[n-1]==1){
        count=3;
    }
cout<<count<<endl;
    
   }
return 0;
}