#include <iostream>
#include <iomanip>

void printType1( int );
void printType2( int );
void printArray( int[], int);

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
        std::cout << "Please enter number: 1 - seat for smokers or 2 - seat for no smokers: ";
        std::cin >> typePlace;
  
        if( typePlace == 1 && type1 < 5)
        {
            arrayPlace[type1] = 1;
            printType1( type1 );
            printArray( arrayPlace, arraySize);
            type1++;
   
        }else
        {
            if( typePlace == 1 && type1 > 4)
            {
                std::cout << "There are no seats for no smokers. Do you want a seat for smokers? yes/no: ";
                std::cin >> text;
            
                if ( text == "yes" || text == "y")
                {
                    arrayPlace[type2] = 1;
                    printType2( type2 );
                    printArray( arrayPlace, arraySize);
                    type2++;
                }else
                {   
                    std::cout << "There are no seats";
                    break;
                }
            };
        }
        
        
        if( typePlace == 2 && type2 < 10)
        {
            arrayPlace[type2] = 1;
            printType2( type2 );
            printArray( arrayPlace, arraySize);
            type2++;
   
        }else
        {
            if( typePlace == 2 && type2 > 9)
            {
                std::cout << "There are no seats for smokers. Do you want a seat for no smokers? yes/no: ";
                std::cin >> text;
            
                if ( text == "yes" || text == "y")
                {
                    arrayPlace[type1] = 1;
                    printType1( type1 );
                    printArray( arrayPlace, arraySize);
                    type1++;
                }else
                {   
                    std::cout << "There are no seats";
                    break;
                }
            };
        };

    }

    if( type1 == 5 && type2 == 10)
        {
            std::cout << std::endl << "--- There are no seats. All tickets are sold out ---";
        };
    
    
}

void printType1( int i )
{
    std::cout << " --- Our ticket --- " << std::endl;
    std::cout << " ... Type place: 1 - no smokers" << std::endl;
    std::cout << " ... Place number: " << i+1 << std::endl;
    
}

void printType2( int type2 )
{
    std::cout << " --- Our ticket --- " << std::endl;
    std::cout << " ... Type place: 2 - smokers" << std::endl;
    std::cout << " ... Place number: " << type2+1 << std::endl;
}

void printArray( int arrayPlace[], int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        std::cout << arrayPlace[i] <<" ";
    }
    std::cout << std::endl;
    
}