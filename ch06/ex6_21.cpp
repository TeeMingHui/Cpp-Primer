#include <iostream>
#include <cstring>
#include <vector>
#include <iterator>
#include <string>
#include <stdexcept>

using std::begin; using std::end; using std::cout; using std::endl; using std::vector;
using std::string; using std::cin; using std::pair; 

 
// For Pointer, it "Points" to the address. With that, have to provide it address! They come in pair, so int *p = &I
// The other side need to follow the convention. 

int larger(const int lhs, const int *const rhs)
{
	return ( ( lhs > *rhs) ? lhs : *rhs);
}

int main(int argc, char const *argv[])
{
	int value = 9;
	const int p = 9;
	cout << "P without *" << p << endl;
	cout << "90 vs P: " << larger(90, &p) << endl;
	cout << "01 vs P: " << larger(1, &p) << endl;

	return 0;
}
