#include <iostream>
using namespace std;

void printsteric(int row);
main()
{
 int row;
 
 cout<<"Enter number of rows: ";
 cin>>row;
 printsteric(row);
 
}

void printsteric(int row)
{
 
 for(int i = 1; i <= row ; i++)
  {
    for(int j = 1; j <=i ; j++)
    {
    cout<<"*";

    }
    cout<<endl;
  }
  
}