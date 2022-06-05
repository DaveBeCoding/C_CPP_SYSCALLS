// C++ Program to demonstrate the working of
// getline(), push_back() and pop_back()
#include <iostream>
// #include <string> // for string class

// Driver Code
int main()
{
	std::string str;

	getline(std::cin, str);

	std::cout << "The initial string is : ";
	std::cout << str << std::endl;

	str.push_back('Z');

	// Displaying string
	std::cout << "The string after push_back operation is : ";
	std::cout << str << std::endl;

	// Deleting a character
	str.pop_back();

	// Displaying string
	std::cout << "The string after pop_back operation is : ";
	std::cout << str << std::endl;

	return 0;
}

