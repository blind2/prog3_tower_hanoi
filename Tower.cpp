#include "Tower.h"
#include<stack>
#include<iostream>


Tower::Tower() :m_stack{}, combinaisonTab{ 0 }{}

void Tower::show()
{	
	std::stack<Hanoi> stackCopy{ m_stack };
	int compteur = 0;
	
	while (!stackCopy.empty())
	{
		combinaisonTab[compteur] = stackCopy.top().getType();
		stackCopy.top().show();
		stackCopy.pop();
		compteur++;
		
	}

	std::cout << "\n"<< "\n";
}

bool Tower::checkCombinaison()
{
	return false;
}

void Tower::addHanoi(Hanoi hanoi)
{
	m_stack.push(hanoi);
}

void Tower::removeHanoi()
{
	m_stack.pop();
}

bool Tower::empty()
{
	if (m_stack.empty()) return true;
	return false;
}

int Tower::top()
{
	if (m_stack.empty()) return 4;
	return m_stack.top().getType();
}


