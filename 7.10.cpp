#include <iostream>
#include <iomanip>
#include <ctime>

int main()
{
    const int arraysize = 10;

    int Sales[arraysize]={5000,5500,6000,7000,8000,9000,9500,8900,10000,11000};

    int Salary[arraysize]={0};

    int RangeSalary[10]={0};
    int RangeSalaryMore=0;


    for (int i = 0; i < 10; i++)
    {
        Salary[i] = Sales[i] * 0.09 + 200;

        std::cout << i <<" "<< Salary[i]<< std::endl;

        RangeSalary[Salary[i]/100]++ ;

        if (Salary[i]/100 > 9)
        {
            RangeSalaryMore++;
        }
        

    }

    for (int i = 1; i < 10; i++)
    {
        std::cout << i <<". " << i*100 << "$" <<" - " << (i*100+99) <<"$" <<" :  "<< RangeSalary[i]<< std::endl;
    };

    std::cout << 10 <<". " << "1000$ and more" <<" :  "<< RangeSalaryMore<< std::endl;
    
    



    
}