#include <iostream>
#include <iomanip>

int main()
{
    int const arraySize = 7;

    char f[arraySize] = {};

    f[7] = 6;
    std::cout << f[7] << " "; 

    std::cout<< std::endl;

    int const arraySize2 = 5;

    int g[arraySize2] = {};

    for (int i = 0; i < arraySize2; i++)
    {
        g[i] = 8;
        std::cout << g[i] << " ";
    }
    
    std::cout<< std::endl;

    int const arraySize3 = 100;

    double h[arraySize3] = {};

    double total = 0;

    for (int i = 0; i < arraySize3; i++)
    {
        double r = rand()/13.7;
        h[i] = r;
        total = total + h[i];
    }
    
    std::cout << std::fixed << std::setprecision(2) << total;

    std::cout<< std::endl;
//Копируем массив a в массив b
    double a[11]={1,2,3,4,5,6,7,8,9,10,20};
    double b[17]={17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};

    for (int i = 0; i < 11; i++)
    {
        b[i]=a[i];
    }
    
    for (int i = 0; i < 17; i++)
    {
        std::cout << b[i] << " ";
    }

    std::cout<< std::endl;
//Определяем наибольше значение массива:
    double bmax;
    
    b[0] = bmax;

    for (int i = 1; i < 17; i++)
    {
        if (bmax < b[i])
        {
            bmax = b[i];
        };
        
    }
    
    std::cout << bmax;
    
}