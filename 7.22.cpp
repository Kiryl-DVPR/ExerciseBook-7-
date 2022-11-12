#include <iostream>
#include <iomanip>

const int row = 6;
const int columns = 5;

void printArray( int[row][columns] );

int main()
{
    int array[row][columns] = {{0,1,2,3,4},{1},{2},{3},{4},{5}};

    for (int i = 1;; i++)
    {
        int seller; 
        std::cout << "Seller's number(or '0' for Exit): "; 
        std::cin >> seller;

        if ( seller == 0)
        {
            break;
        };

        int product; 
        std::cout << "Product number: "; 
        std::cin >> product;

        int profit; 
        std::cout << "Profit: "; 
        std::cin >> profit;

        array[product][seller] = array[product][seller] + profit;
        
    }

    std::cout << std::endl;

    printArray(array);

    std::cout << "-----------------------------------" << std::endl;
    std::cout << "Sum" << "\t";

    for (int i = 1; i < columns; i++) // Сумма(Sum) выручки для каждого продовца 
    {
        int sum = 0;

        for (int j = 1; j < row; j++)
        {
            sum = sum + array[j][i];
        };

        std::cout << sum << " $" << "\t";
  
    }
}

void printArray(  int array[row][columns] )
{
    std::cout << " ----------- $ PROFIT $ -----------" << std::endl;
    std::cout << "   (Seller's / Product number)" << std::endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            
            if (j > 0 && i > 0)
            {
                std::cout << array[i][j] << " $" <<"\t";
            }else
            {
                std::cout << array[i][j] <<"\t";
            }
        }
        std::cout << std::endl;   
    };

         
}
    