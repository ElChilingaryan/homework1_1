#include <iostream>
#include <unistd.h>

void OddOrEven(int arr[], int size)
{
  int sum_even = 0;
  int sum_odd = 0;
  
  if(fork() == 0)
  {
    for (int i = 0; i < size; ++i)
    {
      if(arr[i] % 2 != 0)
      {
        sum_odd = arr[i] + sum_odd;
      }
     }
     std::cout << sum_odd;
  }
  else 
  {
     for(int i = 0; i < sie; ++i)
     {
       if(aarr[i] % 2 == 0)
       {
         sum_even = arr[i] + sum_even;
       }
     }
     std::cout << sum_even;
   }
}



int main()
{
  int size;
  const int arr_size = size;
  std::cin >> size;
  int arr[arr_size];
  for(int i = 0; i < arr_size; ++i)
  {
    arr[i] = rand() % 100;
  }

  OddOrEven(arr, arr_size);
}

     
   

