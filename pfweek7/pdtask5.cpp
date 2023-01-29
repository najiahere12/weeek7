#include <iostream>
using namespace std;
void printtri(int row);
main()
{
 int row;
 cout<<"enter row: ";
 cin>>row;
 printtri(row);

}
void printtri(int row)
{
 int sum=0, num2= 0;
 
 for(int x = 1; x <= row; x++)
 { 
   sum=sum+x;
   num2= sum;
 }
cout<<num2;


}