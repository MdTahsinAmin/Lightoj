#include<bits/stdc++.h>
#define Max 1000000
using namespace std;
#define ll long long
double arr[Max];
int main(){
ll i;
 
for(i=1;i<=Max;i++){
 arr[i]=arr[i-1]+log(i);
 
}
 
int t;
cin>>t;
 
for(int k=1;k<=t;k++){
  int number ,base;
  cin>>number>>base;
 ll x = (arr[number]/log(base))+1;
 cout<<"Case "<<k<<": "<<x<<endl;
}
 return 0;
}
