#include <iostream>
#include <iomanip>

int main()
{
    const int arraySize = 10;

    double fractions[arraySize] = {0};

    fractions[3] = 3.14;
    fractions[9] = 1.667;
    fractions[6] = 3.333;

    std :: cout << "Fractions[0] = " << std::fixed << std::setprecision(2) << fractions[0] << std :: endl;
    std :: cout << "Fractions[3] = " << std::fixed << std::setprecision(2) << fractions[3] << std :: endl;
    std :: cout << "Fractions[9] = " << std::fixed << std::setprecision(2) << fractions[9] << std :: endl;
    std :: cout << "Fractions[6] = " << std::fixed << std::setprecision(2) << fractions[6] << std :: endl;

    for (int x = 0; x <= arraySize; x++)
    {
        std :: cout << x << " " << fractions[x] << std::endl;
    };
    
    return 0;
}