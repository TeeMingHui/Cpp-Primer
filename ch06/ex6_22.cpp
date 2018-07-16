#include <iostream>
#include <cstring>
#include <vector>
#include <iterator>
#include <string>
#include <stdexcept>

using std::begin; using std::end; using std::cout; using std::endl; using std::vector;
using std::string; using std::cin; using std::pair; 

// Refer by pointer reference?
// https://stackoverflow.com/questions/1826203/swapping-addresses-of-pointers-in-c
 
void swap(const int*& lhs, const int*& rhs)
{
	const int *temp = lhs;
	lhs = rhs;
	rhs = temp;
	return;
}

int main(int argc, char const *argv[])
{
	const int value_1 = 90;
	const int value_2 = 10;

	const int *ptr1 = &value_1;
	const int *ptr2 = &value_2;
	cout << "Pointer_1: " << ptr1 << " Value: " << *ptr1 << endl;
	cout << "Pointer_2: " << ptr2 << " Value: " << *ptr2 << endl;
	swap(ptr1, ptr2);
	cout << "Swap Some value!!" << endl;
	cout << "Pointer_1: " << ptr1 << " Value: " << *ptr1 << endl;
	cout << "Pointer_2: " << ptr2 << " Value: " << *ptr2 << endl;

    return 0;
}
