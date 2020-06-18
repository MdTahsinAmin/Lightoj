#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
 
int t;
cin>>t;
 
for(int i=1;i<=t;i++){
 
int ax,ay,bx,by,cx,cy;
cin>>ax>>ay>>bx>>by>>cx>>cy;
 
double acx = (ax+cx)*1.00/2;
double acy = (ay+cy)*1.00/2;
 
int dx = acx*2-bx;
int dy = acy*2-by;
int  area = (ax*by*1.00+bx*cy*1.00+cx*dy*1.00+dx*ay*1.00)-(bx*ay*1.00+cx*by*1.00+dx*cy*1.00+ax*dy*1.00);
cout<<"Case "<<i<<": ";
cout<<dx<<" "<<dy<<" "<<abs(area/2)<<endl;
}
 
}
