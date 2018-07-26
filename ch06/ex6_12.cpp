#include <iostream>
#include <string>
// Exercise 6.11 : Why Reference is prefered over Pointers.
// In pointers - To access the value of actual variable, we need to explicitly deference
// the pointer variable by using ‘value at address’ operator/ dereferencing operator (*).
//
// In references - To access the value of actual variable, we do not need to explicitly dereference
// the reference variable, they gets de-referenced automatically.
//
// Reference variables are cleaner and modish as compare to the pointers;
// they can also be used while passing in the function as arguments, known as call by references.

void swap(int &i1, int &i2)
{
  int temp = i2;
  i2 = i1;
  i1 = temp;
}

int main(int argc, char const *argv[])
{
  int numberA = 1080;
  int numberB = 720;
  std::cout << numberA << std::endl;
  std::cout << numberB << std::endl;
  swap(numberA, numberB);
  std::cout << numberA << std::endl;
  std::cout << numberB << std::endl;
}
