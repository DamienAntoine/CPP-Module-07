#include <iostream>
#include <string>
#include "array.hpp"

int main()
{
	std::cout << "Testing array creation: " << std::endl;
	Array<int> empty;
	std::cout << "	Empty array size: " << empty.size() << std::endl;

	Array<int> numbers(5);
	std::cout << "	Number array size: " << numbers.size() << std::endl;

	for (unsigned int i = 0; i < numbers.size(); i++)
	{
		numbers[i] = i * 2;
	}

	std::cout << "	Numbers: ";
	for (unsigned int i = 0; i < numbers.size(); i++)
	{
		std::cout << numbers[i] << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Testing copies: " << std::endl;
	Array<int> copy(numbers);
	std::cout << "	Copy: ";
	for (unsigned int i = 0; i < copy.size(); i++)
	{
		std::cout << copy[i] << " ";
	}
	std::cout << std::endl;

	numbers[2] = 99;
	std::cout << "	After change - Original[2]: " << numbers[2] << ", Copy[2]: " << copy[2] << std::endl;

	Array<std::string> strings(3);
	strings[0] = "Hello";
	strings[1] = "Template";
	strings[2] = "Array";

	std::cout << std::endl;
	std::cout << "Testing with strings: " << std::endl;
	std::cout << "	Strings: " << strings[0] << " " << strings[1] << " " << strings[2] << std::endl;

	std::cout << std::endl;
	std::cout << "Testing exceptions: " << std::endl;
	try
	{
		std::cout << "	Accessing out of bounds: " << std::endl;
		std::cout << numbers[10] << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "		Exception: " << e.what() << std::endl;
	}

	return 0;
}

/*
//main from intra
#include <iostream>
#include <cstdlib>
#include "array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}
*/
