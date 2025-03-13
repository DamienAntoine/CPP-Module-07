#include "iter.hpp"
#include "tests.hpp"
#include <iostream>

int main()
{
	// int array
	int intArray[] = {1, 2, 3, 4, 5};
	size_t intLength = sizeof(intArray) / sizeof(intArray[0]);

	std::cout << "Original int array: " << std::endl;
	::iter(intArray, intLength, printElement<int>);


	// string array
	std::string strArray[] = {"Hello", "world"};
	size_t strLength = sizeof(strArray) / sizeof(strArray[0]);

	std::cout << "String array: " << std::endl;
	::iter(strArray, strLength, printElement<std::string>);

	return 0;
}
