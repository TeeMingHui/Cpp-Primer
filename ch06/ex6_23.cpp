#include <iostream>

void print(const char* lhs)
{
	std::cout << "Function 1" << std::endl;
	if(lhs)
		while(*lhs)
			std::cout << *lhs++ << std::endl;
}

void print(const int* lhs)
{
	std::cout << "Function 2" << std::endl;
	if(lhs)
		while(*lhs)
			std::cout << *lhs++ << std::endl;
}

void print(const int *beg, const int *end)
{
	std::cout << "Function 3" << std::endl;
	while(beg != end)
		std::cout << *beg++ << std::endl;
}

void print(const int arr[], size_t size)
{
	std::cout << "Function 4" << std::endl;
	for(size_t i = 0; i != size; ++i)
		std::cout << arr[i] << std::endl;
}

void print(const int (&arr)[2])
{
	std::cout << "Function 5" << std::endl;
	for(auto elem : arr)
		std::cout << elem << std::endl;
}


int main(int argc, char const *argv[])
{
	int i = 0, j[2] = { 0, 1 };
    char ch[5] = "pezy";
    print(ch);
    print(&i);
    print(std::begin(j), std::end(j));
    print(j,(std::end(j)-std::begin(j)));
    print(j);
	return 0;
}
