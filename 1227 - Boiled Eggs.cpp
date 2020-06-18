#include<iostream>
#define limit 32000
#define ll long long
using namespace std;
 
int main(){
int t;
cin>>t;
for(int i=1;i<=t;i++){
 int n,p,q;
 cin>>n>>p>>q;
 int sum=0;
 int cnt =0;
 for(int j=0;j<n;j++){
    int x;
    cin>>x;
    sum+=x;
    if(cnt<p&&sum<=q){
        cnt++;
    }
 }
 cout<<"Case "<<i<<": "<<cnt<<endl;
}
}
