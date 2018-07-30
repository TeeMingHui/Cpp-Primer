#include <vector>
#include <iostream>

void print(const std::vector<int>::iterator &bg, const std::vector<int>::iterator &ed)
{
	if (bg == ed)
	{
		std::cout << std::endl;
		return;
	}
	else
	{
		std::cout << *bg  << " ";
		print(bg+1, ed);
	}
}

int main(int argc, char const *argv[])
{
	std::vector<int> myvector;
	for (int i=1; i<=20; i++)
		 myvector.push_back(i);
	print(myvector.begin(), myvector.end());	
	return 0;
}
