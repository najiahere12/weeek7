#include <iostream>
using namespace std;
float percent(int n);
main()
{
  int n;
  int result;
  cout<<"Enter no. of digits: ";
  cin>>n;  
  result=percent(n);
  cout<<result;

}
float percent(int n)
{
  float p1;
  float p2;
  float p3;
  float t;
  float u;
  float v; 
  float sum1=0;
  float sum2=0;
  float sum3=0;
 for(int x=1;x<=n;x++)
 {
   int a;
  cout<<"enter number: ";
  cin>>a;
  if(a%2==0)
  {
  sum1=sum1+1;
  t=sum1;
  }
  if(a%3==0)
  {
  sum2=sum2+1;
  u=sum2;
  cout<<u;

  }
  if(a%4==0)
  {
  sum3=sum3+1;
  v=sum3;
  }
 
 }
   p1=(t*100)/n;
  cout<<p1<<endl;
  p2=(u*100)/n;
  cout<<p2<<endl;
  p3=(v*100)/n;
  cout<<p3<<endl;
 
  return 0;
  
 
}
