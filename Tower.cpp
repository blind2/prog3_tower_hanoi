#include "Tower.h"
#include<stack>
#include<iostream>

Tower::Tower(int size) : m_size{size}, stack {}, combinaison{0}{}

void Tower::show()
{
	std::stack<Hanoi> tempStack{ stack };

	for (int i = 0; i < m_size; i++)
	{
		
		if (stack.size()<=i)
		{						
			std::cout << " ";
			std::cout << "\n";		
		}
		else
		{
			combinaison[i] =tempStack.top().getType();
			tempStack.top().show();
			tempStack.pop();			
		}	
	}
	std::cout << "\n"<< "\n";
}

bool Tower::checkCombinaison()
{
	int combinaisonTab[3]{1,2,3};

	for (int i = 0; i < 3; i++)
	{
		if (combinaisonTab[i] == combinaison[i])
		{
			return true;
		}
	}
	return false;
}


