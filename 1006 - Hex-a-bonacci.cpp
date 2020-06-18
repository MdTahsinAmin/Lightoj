#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll arr[10005];
 
int main(){
  int t;
  cin>>t;
  for(int test = 1;test<=t;test++){
      for(int i =0;i<6;i++){
        cin>>arr[i];
      }
      int n;
      cin>>n;
 
      for(int i = 6;i<=n;i++){
        arr[i]=(arr[i-1]+arr[i-2]+arr[i-3]+arr[i-4]+arr[i-5]+arr[i-6])%10000007;
      }
 
      cout<<"Case "<<test<<": "<<arr[n]%10000007<<endl;
 
  }
}
 
