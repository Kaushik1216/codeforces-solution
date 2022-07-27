//Donut shop
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c,p,q;
    cin>>a>>b>>c;
    if(a>=c){
        p=-1;
    }
    else{
      p=1;
      
    }
    if((c/b)>=a){
        q=-1;
    }
    else{
        q=b;
    }
    cout<<p<<" "<<q<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}