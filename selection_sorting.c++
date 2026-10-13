#include <iostream>
#include <vector>
#include <math.h>
#include <climits>
#include <utility>

void sorting(std::vector<int>& array);
void printArray(std::vector<int> array);

int main(void)
{
    std::vector<int> nums = {4,5,1,42,4325,34,562,9};
    printArray(nums);
    sorting(nums);
    printArray(nums);

    
}


void sorting(std::vector<int>& array)
{
   
    for(int i = 0; i < array.size() - 1;i++)
    { 
      int smallest = i;
      
      for(int j = i + 1 ;j < array.size() ; j++) 
       {
          
           if(array[j] < array[smallest])
           {
             smallest = j; // j refers to index
           }
        
        }
        std::swap(array[smallest] ,array[i]);
        
    }
}

void printArray(std::vector<int> array)
{
    for(int i = 0;i < array.size() ; i++)
    {
        std::cout << array[i] << " ";
    }
    printf("\n");
}
