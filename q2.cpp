#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n , k;
       cin>>n;
       cin>>k;
       int arr[n];
       for(int i =0 ; i<n; i++){
           cin>>arr[i];
       }
       sort(arr, arr+n); 
       if(k  >=n){
           cout<<arr[n-1]<<endl;
       }
       else{
       cout<< arr[k]<<endl;
       }
    }

}
