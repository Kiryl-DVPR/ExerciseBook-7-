//7.17
#include <iostream>
#include <iomanip>
#include <cstdlib>

int main()
{ 
 int qube1, qube2;
 
 int const arraysize = 13;
 int array[arraysize] = {0};
 
 for( int i = 0; i < 3600; i++)
 {
  int seed = i;
  srand(seed);
 
  qube1 = rand()%6 + 1;
  qube2 = rand()%6 + 1;
  
  array[qube1 + qube2]++;
  
 }
 
 for( int i = 1; i < arraysize; i++)
 {
  std::cout << i << ": "<< array[i] << std::endl;
 }
    
    return 0;

}