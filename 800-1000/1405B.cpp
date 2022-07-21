#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        
        cin>>n;long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long pos=0;
        for(int i=0;i<n;i++){
           if(a[i]>0){
            pos  = pos +a[i];
           }
           else if (a[i]<0 && i>0){
               if(pos>(-(a[i]))){
                pos = pos +a[i];
                a[i]=0;
               }
               else{
                a[i] = a[i]+pos;
                pos=0;
               }
           }
        }
        long long count=0;
        for(int i=0;i<n;i++){
            if(a[i]<0){
                count = count +a[i];
            }
        }
        cout<<abs(count)<<endl;
    }
}