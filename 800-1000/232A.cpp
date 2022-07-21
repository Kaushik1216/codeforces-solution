#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,n;
    cin>>s>>n;
    vector<list<int>> v;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        list<int> l;
        l.push_back(x);
        l.push_back(y);
        v.push_back(l);
    }
    sort(v.begin(),v.end());
    int count=0;
    vector<list<int>>::iterator it1;
    list<int>::iterator it2;
    for(it1=v.begin();it1!=v.end();it1++){
        it2 =(*it1).begin();
        if(s> (*it2)){
            count =count +1;
            it2++;
             s = s+(*it2);
        }
        else{
            break;
        }
    }
    if(count==n){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}