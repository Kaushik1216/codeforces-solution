#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   long int a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   int m;
   cin>>m;
   long int b[m];
   for(int i=0;i<m;i++){
    cin>>b[i];
   }
   sort(a,a+n);
    long long int s=0;
   for(int i=0;i<n;i++){
    s = s+a[i];
   }
   for(int i=0;i<m;i++){
      cout<<(s-a[n-b[i]])<<endl;
   }
    return 0;
}