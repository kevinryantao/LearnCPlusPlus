#include <iostream>

using namespace std;

int main(){

  int x = 0;
  cout<<"Enter the number you wish to take a factorial of: ";
  cin>>x;
  
  int number_of_trailing_zeros = x / 5 + x / 25 + x / 125 + x / 625;
  cout<<"Total number of trailing zeros is : "<<number_of_trailing_zeros;
  


  return 0;
}
