#include<bits/stdc++.h>
using namespace std ;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int x,y;
        cin>>x>>y;
        if(x==0){
            cout<<"1"<<endl;
        }
        else if(y==0){
            cout<<x+1<<endl;
        }
        else{
            cout<<(x+2*y)+1<<endl;
        }
    }
}