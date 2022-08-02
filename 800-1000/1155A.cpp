//1000A reverse a substirng
#include<bits/stdc++.h>
using namespace std;
 
 
 
int main(){
   int n;
   cin>>n;
    string s;
    cin>>s;
    int count=0;
    for(int i=1;i<(s.length());i++){
       if(char(s[i])>=char(s[i-1])){
        count++;
       }
       else{
        break;
       }
    }
    if(count==(s.length()-1)){
        cout<<"NO"<<endl;
        return 0;
    }
    count++;
    int tem;
    for( tem=count;tem>0;tem--){
        if(char(s[count])<char(s[tem-1])){
            cout<<"YES"<<endl;
            cout<<tem<<" "<<count+1<<endl;
            return 0;
        }
    }          
    return 0;
}