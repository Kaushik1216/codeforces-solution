//A. Divide and Multiply
 
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
      int n;
       cin>>n;
       long long int a[n];
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
     
	long long int temp = 1;
	long long int prev=0;;
	for(int i=0;i<n;i++){
		while (a[i] % 2 == 0){
			a[i] /= 2;
			temp *= 2;
    }
  }
  sort(a,a+n);
  a[n-1]=a[n-1]*temp;
  for(int i=0;i<n;i++){
    prev = prev+a[i];
  }
  
  cout<<prev<<endl;
    }
    return 0;
}