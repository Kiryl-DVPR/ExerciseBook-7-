#include <iostream>
#include <iomanip>


int main()
{
    int const arraySize = 5;

    int array[arraySize] = {13,21,5,4,8};
    
    for(int i=1; i < arraySize; ++i)
    {  
        for (int r = 0; r < arraySize-i; r++)
        {

            if ( array[r] < array[r+1])
                {
                    int temp = array[r];
                    array[r] = array[r+1];
                    array[r+1] = temp;
                };
                
        }
    };

    for( int i = 0; i < arraySize; i++ )
    {
        std::cout << array[i] << std::endl;
    };

    return 0;
}