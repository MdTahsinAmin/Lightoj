#include<bits/stdc++.h>
#define pi acos(-1)
using namespace std;
 
int main(){
int t;
cin>>t;
for(int i=1;i<=t;i++){
double o1,o2,a1,a2,b1,b2;
cin>>o1>>o2>>a1>>a2>>b1>>b2;
double radious = sqrt(pow((o1-a1),2)+pow((o2-a2),2));
               
double ABlength= sqrt(pow((a1-b1),2)+pow((a2-b2),2));
   
double AClength =sqrt(pow(radious,2)-pow((ABlength/2),2));
 
double angle = 180-2*((asin(AClength/radious)*180)/pi);
 
double result = (2*pi*radious*angle)/(360.00);
 
 
cout<<fixed;
cout<<"Case "<<i<<": ";
cout<<setprecision(9)<<result<<endl;
 
}
               
return 0;
}
