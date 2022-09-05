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

	ring<std::string>::iterator it;
	it.print();

	return 0;
}
