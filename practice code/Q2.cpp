/**/

// Diamond printing using sterics *

#include <iostream>
using namespace std;

int main() {
  
  int size;

  // Prompt the user to enter the size of the diamond
  std::cout << "Enter an odd number as size of diamond: ";
  std::cin >> size;

  // Validate that the size is an odd number
  if (size % 2 == 0) {
    std::cout << "Error: Size must be an odd number." << std::endl;
    return 1;
  }

  // Calculate the number of spaces and stars for each row
  int spaces = size / 2;
  int stars = 1;

  // Print the first half of the diamond
  for (int i = 0; i < size / 2 + 1; i++) {
    // Print the spaces
    for (int j = 0; j < spaces; j++) {
      std::cout << " ";
    }

    // Print the stars
    for (int j = 0; j < stars; j++) {
      std::cout << "*";
    }

    // Move to the next line
    std::cout << std::endl;

    // Decrement the number of spaces and increment the number of stars
    spaces--;
    stars += 2;
  }

  // Reset the number of spaces and stars for the second half of the diamond
  spaces = 1;
  stars -= 4;

  // Print the second half of the diamond
  for (int i = 0; i < size / 2; i++) {
    // Print the spaces
    for (int j = 0; j < spaces; j++) {
      std::cout << " ";
    }

    // Print the stars
    for (int j = 0; j < stars; j++) {
      std::cout << "*";
    }

    // Move to the next line
    std::cout << std::endl;

    // Increment the number of spaces and decrement the number of stars
    spaces++;
    stars -= 2;
  }

  return 0;
}
/**/

/*
         output                                                    input
Sr.No........x........y........z..................D0....D1....D2....D3....D4....D5....D6....D7
   0         0        0        0   x'y'z'         1     0     0     0     0     0     0     0 
   1         0        0        1   x'y'z          0     1     0     0     0     0     0     0
   2         0        1        0   x'y z'         0     0     1     0     0     0     0     0
   3         0        1        1   x'y z          0     0     0     1     0     0     0     0 
   4         1        0        0   x y'z'         0     0     0     0     1     0     0     0 
   5         1        0        1   x y'z          0     0     0     0     0     1     0     0 
   6         1        1        0   x y z'         0     0     0     0     0     0     1     0
   7         1        1        1   x y z          0     0     0     0     0     0     0     1
*/

/*
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  int age = 0;
  float marks = 0.0;
  char name[50] = {'\0'};
  cout<<"Enter your name"<<endl;
  cin>>name;
  cout<<"Enter your age"<<endl;
  cin>>age;
  cout<<"Enter your marks"<<endl;
  cin>>marks;
  
  ofstream fout;
  fout.open("output.txt"); 
  fout<<name<< " ";
  fout<<age<<" ";
  fout<<marks<<" ";
  fout.close();
  return 0;
}
*/

