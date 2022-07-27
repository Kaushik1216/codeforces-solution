#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%2!=0 || n<4){cout<<-1<<endl;}
        else{
            if(n%6==0){cout<<n/6<<" ";}
            else if((n%6)%4==0){cout<<((n-(n%6))/6)+1<<" ";}
            else cout<<((n-(n%6)-6)/6)+2<<" ";

            if(n%4==0){cout<<n/4<<endl;}
            else{
                cout<<((n-(n%4)-4)/4)+1<<endl;
                } 
           
        }
    }

    return 0;

}
