#include "Tower.h"
#include<stack>
#include<iostream>


Tower::Tower() :m_stack{}{}

void Tower::show()
{	
	std::stack<Hanoi> stackCopy{ m_stack };
	
	while (!stackCopy.empty())
	{
		stackCopy.top().show();
		stackCopy.pop();	
	}

	std::cout << "\n"<< "\n";
}

bool Tower::checkCombinaison()
{
	if (m_stack.size() == 3 && m_stack.top().getType() ==1)
	{
		return true;
	}
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
	if (m_stack.empty()) 
	{
		return true;
	} 
	return false;
}

int Tower::top()
{
	if (m_stack.empty()) 
	{
		return 4;
	}
	return m_stack.top().getType();
}


