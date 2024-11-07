#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
      int n;
    cin>>n;
    vector<int>v(n);
    for(auto &it:v)
      cin>>it;

      sort(v.begin(),v.end());
      long long ans=(v[0]+v[1])/2;
      for(int i=2;i<n;i++){
        ans=(ans+v[i])/2;
      }
      cout<<ans<<endl;
    }
     return 0;
}