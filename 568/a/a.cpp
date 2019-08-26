#include <iostream>

using namespace std;

int main()
{
    freopen("a.inp","r",stdin);
    freopen("a.out","w",stdout);
    long long no1,no2,no3,hi,lo,sto,d;
    cin>>no1>>no2>>no3>>d;

   if (no1>no2) {   
      sto=no1;    
      lo=no2;   
   } else {
      sto=no2;  
      lo=no1;  
   } 
   if (sto>no3) { 
      hi=sto;    
      if(lo>no3){         
         sto=lo;                
         lo=no3;
      }else {
         sto=no3;      
      }         
   }else hi=no3;
   long long ans1=0,ans2=0; 
    if(hi-sto<d)
    {
        ans1=d-(hi-sto);
    }
    if(sto-lo<d)
    {
        ans2=d-(sto-lo);
    }
    cout<<ans1+ans2;
}