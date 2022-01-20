#include<iostream>
using namespace std;
int main()
{
  int op,x,y;
  cout<<"press 1 for addition,2 for subtraction and 3 for multiplication\n";
  cin>>op;
  cout<<"enter two numbers\n";
  cin>>x>>y;

  if(op==1)
  cout<<"sum is "<<x+y;
  else if(op==2)
  cout<<"difference is "<<x-y;
  else if(op==3)
  cout<<"product is "<<x*y;
  else
  cout<<"enter a valid choice";
  return 0;
  }
