#include<bits/stdc++.h>
#include<iostream>
#define limit 32000
#define ll long long
using namespace std;
bool isPal(ll n){
    string str,qtr;
    str = to_string(n);
    qtr = str;
  reverse(str.begin(),str.end());
    if(str==qtr) return true;
    else return false;
}
 
int main(){
int t;
cin>>t;
for(int i=1;i<=t;i++){
 ll n;
 cin>>n;
 bool is = isPal(n);
 if(!is){
 cout<<"Case "<<i<<": "<<"No"<<endl;
}
else cout<<"Case "<<i<<": "<<"Yes"<<endl;
}
}
 
