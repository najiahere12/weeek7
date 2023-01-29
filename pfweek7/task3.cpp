#include <iostream>
using namespace std;
void printable(int n,int x);
main()
{
 int x;
 int n;
 int table;
 cout<<"enter number: ";
 cin>>x;
 printable(n,x);
 
 
}
void printable(int x,int n)
{
 int product;
 for(n=1;n<=10;n++)
 {
   int product=n*x;
   cout<<x<<" x "<<n<<"="<<product<<endl;

 }
 
 


}