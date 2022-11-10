//7.13
#include <iostream>
# include <iomanip>

int main()
{
 int const counts = 10;
 
 int array[counts] = {0};
 for( int i = 0; i < counts; i++)
 {
  std::cout << "Enter " << i << ": ";
 
  std::cin >> array[i];
 }
 
 std::cout << std::endl;
 for( int i = 0; i < counts; i++ )
 {
  array[i]++;
  std::cout << i << ": "<< array[i] << std::endl;
 }
    
    return 0;

}