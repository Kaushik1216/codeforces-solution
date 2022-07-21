#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int n,m;
	while(t){
      cin>>n>>m;
	  int a[n][m];
	  for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	  }
	  int final=0;
      
	  int x,y;
      for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			// count = ldown(a,i,j,n,m) + ltop(a,i,j,n,m) + rtop(a,i,j,n,m) +rdown(a,i,j,n,m)	;
            x=i;y=j;
            int count=0;
			while(x>=0 && y>=0){
            count = count + a[x][y];
		     x--;
		    y--;
	       }
           x=i-1;y=j+1;
           while(x>=0 && y<m){
            count = count + a[x][y];
		    x--;
		    y++;
	       }
           x=i+1;y=j-1;
           while(x<n && y>=0){
            count = count + a[x][y];
		    x++;
		    y--;
	       }
           x=i+1;y=j+1;
           while(x<n && y<m){
           count = count + a[x][y];
		   x++;
		   y++;
	      }
          final = max(final,count);
           
		}
	  }
      cout<<final<<endl;
		t--;
	}
	return 0;
}