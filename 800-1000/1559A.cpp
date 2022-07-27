// mocha 
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++ ){
            cin>>a[i];
        }
       int c=a[0];
       for(int i=1;i<n;i++){
        c=c&a[i];
       }
       cout<<c<<endl;

    }
    return 0;
}