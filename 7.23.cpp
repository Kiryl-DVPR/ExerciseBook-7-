#include <iostream>
#include <iomanip>

const int rows = 20;
const int columns = 20;

void printArray( int[rows][columns] );

int main()
{   
    int command = 0;
    int rowLoc = 0;//Строка нахождения черепахи
    int columnLoc = 0;//Колонка нахождения черепахи
    int lenth;//Длина движения черепашки
    int rl = 1; // Счётчик для поворота направо и налево (чётный - движение по строкам, нечётный - движение по колоннкам)
    int Array[rows][columns] = {0};

    int i = 0;
    int j = 0;

    while ( command != 9)
    {
        std::cout << "Enter command: ";
        std::cin >> command;

        switch (command)
        {
            case 5: //Движение вперёд
            std::cout << "Enter lenth: ";
            std::cin >> lenth;
            if ( rl % 2 == 0)
            {
                for (i ; i < lenth; i++)
                {
                    Array[i][columnLoc] = 1;
                    rowLoc = i;
                }
            }
            if ( rl == 1)
            {
                for (j ; j < lenth; j++)
                {
                    Array[rowLoc][j] = 1;
                    columnLoc = j;
                }
            }
            if ( rl%3 == 0)
            {
                for (j ; j > lenth-j; j--)
                {
                    Array[rowLoc][j-1] = 1;
                    columnLoc = j-1;
                }
            }
            break;

            case 3://Поворот направо
            rl++;
        
        default:
            break;
        }

    }

    printArray(Array);
}

void printArray(  int array[rows][columns] )
{

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            
            std::cout << array[i][j] <<" ";
            
        }
        std::cout << std::endl;   
    };

         
}