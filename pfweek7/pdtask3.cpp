#include <iostream>
using namespace std;
void printsteric(int row);
main()
{
 int row;
 cout<<"enter number of rows: ";
 cin>>row;
 printsteric(row);

}

void printsteric(int row)
{
 
 for(int i = 1; i <= row ; i++)
  { 
    cout<<" ";
    for(int j = 1; j <= row-i ; j++)
    {  
    cout<<" ";
    
    }
      for(int k = row; k > row - i ; k--)
    { 
       
    cout<<"*";
    
    }
    cout<<endl;
  }
   
  for(int i = row ; i >= 1 ; i--)
  { 
    cout<<" ";
    for(int j = 1; j <= row-i ; j++)
    {  
    cout<<" ";
    
    }
      for(int k = row; k > row - i ; k--)
    { 
       
    cout<<"*";
    
    }
    cout<<endl;
  }
   
   

}
  
