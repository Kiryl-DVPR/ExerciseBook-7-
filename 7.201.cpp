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
        std::cout << "Please enter 1 - for smoke people or 2 - for no smoke people: ";
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
                std::cout << "I'm sorry. Do you want to place for smoke? yes/no: ";
                std::cin >> text;
            
                if ( text == "yes" || text == "y")
                {
                    arrayPlace[type2] = 1;
                    printType2( type2 );
                    printArray( arrayPlace, arraySize);
                    type2++;
                }else
                {   
                    std::cout << "I'm sorry, We don't have free place";
                    break;
                }
            };
        }
        
        
        if( typePlace == 2 )
        {
            arrayPlace[type2] = 1;
            printType2( type2 );
            printArray( arrayPlace, arraySize);
            type2++;
   
        };

    }
}

void printType1( int i )
{
    std::cout << " --- Our ticket --- " << std::endl;
    std::cout << " ... Type place: 1 - no smoke" << std::endl;
    std::cout << " ... Place number: " << i+1 << std::endl;
    
}

void printType2( int type2 )
{
    std::cout << " --- Our ticket --- " << std::endl;
    std::cout << " ... Type place: 2 - smoke" << std::endl;
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