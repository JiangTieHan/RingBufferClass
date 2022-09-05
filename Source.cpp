#include <iostream>
#include "RingBuffer.h"

int main() {
	ring<std::string> textring(3);

	textring.add("one");
	textring.add("two");
	textring.add("three");
	textring.add("four");

	for (int i = 0; i < textring.size(); i++)
	{
		std::cout << textring.get(i) << std::endl;
	}
	std::cout << std::endl;

	for (ring<std::string>::iterator it = textring.begin(); it != textring.end(); it++)
	{
		std::cout << *it << std::endl;
	}

	std::cout << std::endl;

	for (const std::string& s : textring)
	{
		std::cout << s << std::endl;
	}
	return 0;
}
