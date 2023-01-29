#include <iostream>
using namespace std;
int patient(int num);
main()
{
int num;
int result;
cout<<"enter number of days: ";
cin>>num;

result=patient(num);
}
int patient(int num)
{
    int sum=0;
    int treat=0;
    int untreat = 0;
    int s=0;
   int s2=0;
   int doc=7;
for(int x=1;x<=num;x++)
 { 
   int a;
   cout<<"enter patients: ";
   cin>>a;
   a = a + untreat;
   //treated 
   if(a > doc)
   {
     s=a-doc;
     treat = treat + doc;
     untreat = s;
   } 
   if(a < doc)
   {
      treat = treat + s;
   }
   if(x%3==0)
   {
    if(untreat > treat)
    {
       doc++;
    }
   }
    
 }
 
   cout <<untreat<<endl;
   cout <<treat;  
   
   
   
 return 0;
 }