#include <iostream>
using namespace std;
int main()
{
  std::cout << "Enter the size of the diamond: ";
  int size;
  std::cin >> size;
  for (int i = 1; i <= size; i += 2) 
  {
    for (int j = 0; j < (size - i) / 2; j++) 
    {
      std::cout << " ";
    }
    std::cout << "*";
    for (int j = 0; j < i - 2; j++) 
    {
      std::cout << " ";
    }
    if (i > 1) 
    {
      std::cout << "*";
    }
    std::cout << std::endl;
  }
  for (int i = size - 2; i >= 1; i -= 2) 
  {
    for (int j = 0; j < (size - i) / 2; j++) 
    {
      std::cout << " ";
    }
    std::cout << "*";
    for (int j = 0; j < i - 2; j++) 
    {
      std::cout << " ";
    }
    if (i > 1) 
    {
      std::cout << "*";
    }
    std::cout << std::endl;
  }
  return 0;
}
