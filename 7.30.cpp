#include <iostream>
#include <iomanip>

const int array1Size = 10;

void bucketSort( int [], int, int);
void printArray2( int [10][array1Size]);
void printArray1( int [array1Size]);


int array1[array1Size] = {97,3,100,115,220,69,78,47,82,31};
int array2[10][array1Size] = {0};

int main()
{
    
    bucketSort(array1, array1Size, 10);
    
    printArray1(array1);
    
    std::cout<<std::endl;
   
    bucketSort(array1, array1Size, 100);

    printArray1(array1);

    std::cout<<std::endl;

    bucketSort(array1, array1Size, 1000);

    printArray1(array1);
    
    
}

void bucketSort( int array1[] , int array1Size, int r)
{

    for (int i = 0; i < array1Size; i++)
    {
        int n;
 
        if (r==10)
        {
            n = array1[i]%10;
            
        }
        if (r==100)
        {
            n = (array1[i]%100)/10;

        }
        if (r==1000)
        {
            n = (array1[i]%1000)/100;

        }
        
        array2[n][i] = array1[i];
        
    }
  
    int a = 0;
    
    for (int u = 0; u < 10; u++)
    {

        for (int j = 0; j < array1Size; j++)
        {
            
            if (array2[u][j] != 0)
            {
                array1[a] = array2[u][j];
                a++;
                
            }
 
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < array1Size; j++)
        {
            array2[i][j] =0;
        }

        
        
    }

    
};

void printArray1( int [array1Size])
{
    for (int i = 0; i < array1Size; i++)
    {
        std::cout << array1[i] <<" \t";
    }
}

void printArray2( int [10][array1Size])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < array1Size; j++)
        {
            std::cout << array2[i][j] <<" \t";
        }

        std::cout<<std::endl;
        
    }
}