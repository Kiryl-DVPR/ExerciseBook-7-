#include <iostream>
#include <iomanip>

int const row = 3;
int const column = 4;

void printArray( int [row][column]);
void enterElrmentsArray( int [row][column]);

int main()
{
     
    int t[row][column];

    enterElrmentsArray(t);

    printArray(t);

    t [0][0] = t [0][2];

    std::cout << std::endl;

    printArray(t);

    int maxArray = t[0][0]; //Предполагаем максимальное значение, и дальше все элементы массива будем сравнить с эти элементов, пока не найдётся больше этого эемента

    for (int i = 0; i < row; i++)
    { 

        for (int y = 0; y < column; y++)
        {
            if (t[i][y] > maxArray)
            {
                maxArray = t[i][y];
            }
            
        }

    };

    std::cout << std::endl;

    std::cout << "Max value for Array: " << maxArray;
    
}

void enterElrmentsArray( int t[row][column])
{
    for (int i = 0; i < row; i++)
    {
       
        for (int y = 0; y < column; y++)
        {
            std::cout <<" Enter " << "[" << i << "]" << " " << "[" << y << "]" << ": ";
            std::cin >> t[i][y];
        }

        std::cout << std::endl;
        
    };
};

void printArray( int t[row][column])
{   

    for (int i = 0; i < column; i++)
    {
        std::cout << std::setw(4)  << "[" << i << "]"  ;
    };

    std::cout << std::endl;
    
    for (int i = 0; i < row; i++)
    {
        std::cout << "[" << i << "]" << std::setw(2); 

        for (int y = 0; y < column; y++)
        {
            std::cout << t[i][y] << std::setw(6);
        }

        std::cout << std::endl << std::setw(0);
        
    };
};

