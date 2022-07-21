#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long s[3];
        long long c=1;
        long long d=n-c;
        long long a=1;
        long long b = d-a;
        while(1){
            if(a>=d || b<=0){
                c++;
                d=n-c;
                a=1;
                b=d-a;
            }
            else{
              if(a!=b && a!=c && b!=c ){
                if(__gcd(a,b)==c){
                    s[0]=a;s[1]=b;s[2]=c;
                    break;
                }
                else{
                    a++;b--;
                }
              }
              else{
                a++;b--;
              }
            }
        }
      for(int i=0;i<3;i++){
        cout<<s[i]<<" ";
      }
      cout<<endl;
    }
    return 0;
}