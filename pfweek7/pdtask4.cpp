#include <iostream>
using namespace std;
void amplify(int sequence);
main()
{
 int sequence;
 cout<<"enter amplify sequence: ";
 cin>>sequence;
 amplify(sequence);

}
void amplify(int sequence)
{
 int b;
 int c;
 for(int x=1;x<=sequence;x++)
 {
   cout<<"enter a number: ";
   cin>>c;
   if(c%4==0)
    {
      b=c*10;
      cout<<b<<endl;

    }


 }








}