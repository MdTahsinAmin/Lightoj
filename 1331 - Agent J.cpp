#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll ;
typedef double dou;
typedef long long int lli;
#define pi acos(-1.0)
 
 
int main(){
ll t;
cin>>t;
 
for(int i =1;i<=t;i++){
     dou r1,r2,r3;
     cin>>r1>>r2>>r3;
     dou a = r1+r2;
     dou b = r2+r3;
     dou c = r3+r1;
     dou x = 2.00;
     dou s = (a+b+c)/x;
 
     dou the_area_of_triangle = sqrt(s*(s-a)*(s-b)*(s-c));
 
     dou cosA = .5*r3*r3*acos((pow(b,2)+pow(c,2)-pow(a,2))/(x*b*c));
     dou cosB = .5*r1*r1*acos((pow(a,2)+pow(c,2)-pow(b,2))/(x*a*c));
     dou cosC = .5*r2*r2*acos((pow(a,2)+pow(b,2)-pow(c,2))/(x*a*b));
     cout<<"Case "<<i<<": ";
     cout<<fixed<<setprecision(8)<<the_area_of_triangle-(cosA+cosB+cosC)<<endl;
 
 
}
 
 
}
 
