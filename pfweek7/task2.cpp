#include <iostream>
using namespace std;
int calsum();
main()
{

 int showsum;
 showsum=calsum();
 cout<<showsum<<endl;

}
int calsum()
{
  int sum=0;
 for(int x=1;x<=5;x=x+1)
 {
 sum=sum+x;
 
 }

 return sum;

}
