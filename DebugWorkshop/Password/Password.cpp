#include <iostream>
//input: 16 chars and enter
//reason: the buffer takes 16 chars but in a string, the last char is null
// so after you enter 16 chars the 17th char will overflow to incorrect and will change it to false which will allow you to enter
struct Password
{
	char value[16];
	bool incorrect;
	Password() : value(""), incorrect(true)
	{
	}
};

int main()
{
	std::cout << "Enter your password to continue:" << std::endl;
	Password pwd;
	std::cin >> pwd.value;

	if (!strcmp(pwd.value, "********"))
		pwd.incorrect = false;

	if(!pwd.incorrect)
		std::cout << "Congratulations\n";

	return 0;
}
