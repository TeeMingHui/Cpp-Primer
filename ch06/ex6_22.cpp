#include <iostream>

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

// Alternative ? Swap by Value.

void swap(int* lhs, int* rhs)
{
	int temp = *rhs;
	*rhs  = *lhs;
	*lhs = temp;
}

int main(int argc, char const *argv[])
{
	int value_1 = 10;
	int value_2 = 20;

	int *pointer_1 = &value_1;
	int *pointer_2 = &value_2;

	std::cout << "Before Swap " << std::endl;
	std::cout << "value_1: "	<< value_1 	<< std::endl;
	std::cout << "value_2: "	<< value_2 	<< std::endl;
	
	swap(pointer_1,pointer_2);

	std::cout << "After Swap " << std::endl;
	std::cout << "value_1: "	<< value_1 	<< std::endl;
	std::cout << "value_2: "	<< value_2 	<< std::endl;
	
	return 0;
}
