#include <iostream>
#include <iomanip>

int main()
{
    const int arraySize = 1000;
    int array[arraySize];

    array[0] = { 1 };
    array[1] = { 1 };

    for (int i = 2; i < arraySize; i++)
    {
        array [i] = 1;

        int r = 0;

        for (int j = 1; j <= i; j++)
        {
            if ( i % j == 0 )
            {
                r++;
            };
            
        }

        if ( r != 2 )
        {
            array[i] = 0;
        };  
         
    }

    for (int i = 0; i < arraySize; i++)
    {
        if ( array[i] == 1)
        {
            std::cout << i <<" ";
        }
    }
    
    
}