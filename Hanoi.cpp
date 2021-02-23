#include "Hanoi.h"
#include <iostream>


Hanoi::Hanoi(int type) : m_type{ type } {}

Hanoi::Hanoi(){}

void Hanoi::show()
{
	switch (m_type)
	{
	case 1:
		std::cout << "  @  ";
		std::cout << "\n";
		break;
	case 2:
		std::cout << " @@@ ";
		std::cout << "\n";
		break;
	case 3:
		std::cout << "@@@@@";
		std::cout << "\n";
		break;
	}
}

int Hanoi::getType()
{
	return m_type;
}

