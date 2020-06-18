#include<bits/stdc++.h>
 
using namespace std;
 
const int mx  = 2e4+123;
vector<int>adj[mx];
bool isVis[mx];
bool isCon[mx];
int Node = 0;
int Color_1 =0;
void dfs(int u,int color){
 
 isVis[u]=1;
 if(color==1) Color_1++;
 Node++;
 
 int temp;
 if(color==1) temp = 2;
 else temp = 1;
 
 for(auto v :adj[u]){
     if(isVis[v]==0){
        dfs(v,temp);
     }
 }
 
 
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
int T;
cin>>T;
for(int test_case =1;test_case<=T;test_case++){
    for(int i =1;i<=mx;i++){
         adj[i].clear();
         isCon[i]=0;
         isVis[i]=0;
    }
     int n;
     cin>>n;
     for(int edge = 1;edge<=n;edge++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        isCon[u]=1;
        isCon[v]=1;
     }
     int ans = 0;
     for(int i = 1;i<=2e4;i++){
        if(isCon[i]==1&&isVis[i]==0){
            Node=0;
            Color_1=0;
            dfs(i,1);
            ans+=max(Color_1,abs(Color_1-Node));
        }
     }
 
   cout<<"Case "<<test_case<<": "<<ans<<endl;
}
 
return 0;
}
