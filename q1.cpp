#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t ;
    cin>>t ;
    while(t--){
        long long int n,x,y;
         long long int count0=0;
     long long int count1=0;

        string s;
        cin>>n;
        cin>>x;
        cin>>y;
        cin>>s;
    
    for(int i=0 ; i<n ; i++){
        //cout<<s[i]<<endl;
        
        if(s[i]=='1'){
            count1+=1;
           // cout <<count1<<";; "<<s[i]<<" ;;"<<endl;;

        }
        if(s[i]=='0'){
            count0+=1;
            //cout <<count0<<" //"<<s[i]<<endl;;
        }

    }
    //cout<<count0<<" "<<count1<<endl;
    if(count0==0||count1==0){
        cout<<"0"<<endl;
    }
    else{
        cout<<min(x,y)<<endl;
    }
}
}