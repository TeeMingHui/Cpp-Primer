// @Yue Wang
//
// Exercise 6.44: Rewrite the isShorter function from § 6.2.2 (p. 211) to be inline.
//
#include <iostream>

inline const std::string &isShorter(const std::string &lhs, const std::string &rhs) 
{
    return (lhs < rhs) ? lhs : rhs; 
}

int main(int argc, char const *argv[])
{
	std::cout << "Shorter Version: " << isShorter("Ming Hui", "Scott Jones") << std::endl;
	return 0;
}
