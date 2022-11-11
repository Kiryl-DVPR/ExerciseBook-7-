#include <iostream>
#include <iomanip>

int main()
{

    int typePlace;
 
    int const arraySize = 10;
 
    int arrayPlace[arraySize] = {0};

    int type1 = 0;
    int type2 = 5;

    std::string text;
 
    for( int i=0; i < 10; i++ )
    {
        std::cout << "Please enter 1 for smoke people or 2 for no smoke: ";
        std::cin >> typePlace;
  
        if( typePlace == 1 && type1 < 5)
        {
            arrayPlace[type1] = 1;
            type1++;
   
        };

        if( typePlace == 1 && type1 > 4)
        {
            std::cout << "I'm sorry. Do you want to place for smoke? yes/no: ";
            std::cin >> text;
            
            if ( text == "yes" || text == "y")
            {
                arrayPlace[type2] = 1;
                type2++;
            }else
            {
                std::cout << "I'm sorry, We don't have free place";
                break;
            }
            
            
        }
  
        std::cout << " --- Our ticket --- " << std::endl;
        std::cout << " 1. Type place: " << typePlace << std::endl;

        if( typePlace == 1 )
        {
            std::cout << " 2. Place: " << (type1) << std::endl;
        }else
        {
            std::cout << " 2. Place: " << (type2) << std::endl;
        }

        for (int b = 0; b < arraySize; b++)
        {
            std::cout << arrayPlace[b] <<" ";
        }

        std::cout << std::endl;
        
  
    };


}