#include <iostream>
#include <iomanip>

int main()
{
    int const arraySize = 10;
    int array[arraySize];

    for (int i = 0; i < arraySize; i++)
    {
        std::cout << "Enter element array " << i << ": ";

        std::cin >> array[i];

        int c = 0; // Счётчик, если весь массив пройден и не найдено одинакового значения до i-го элемента, то выводится i элемент массива
            
        if (i==0)
        {
            std::cout << array[i] << std::endl;
        }

        for (int a = 0; a < i; a++)
        {
            
            if ( array[i] == array[a])
            {
                break; 
            }

            c++; // Подсчитывает сколько раз array[i] != arraay[a]

            if( c == i )
            {
                std::cout << array[i] << std::endl;
            } 

              
        }  
        
    }
    
}