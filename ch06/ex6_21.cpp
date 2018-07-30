#include <iostream>

// A pointer is the memory address of an object
// To deference its memory address, use "&"
// Example *int x = &I;
// The other side need to follow the convention. 
// The Argument below changed into constant: NO Changes required to the value.

int isLarger(const int lhs, const int *const rhs)
{
	return ( ( lhs > *rhs ) ? lhs : *rhs ); 
}

int main(int argc, char const *argv[])
{
	int star  = 999999;
	int value = 9;
	int *p    = &value;	
	std::cout << "90 vs P: " << isLarger(90, p) << std::endl;
	std::cout << "01 vs P: " << isLarger(1, p) << std::endl;
	// To illustrate pointer memory location
	std::cout << "value vs &star: " << isLarger(value, &star) << std::endl;
	return 0;
}
