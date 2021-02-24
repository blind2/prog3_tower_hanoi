#ifndef TOWER_H
#define TOWER_H
#include"Hanoi.h"
#include<stack>

class Tower
{
private:
	std::stack<Hanoi> m_stack;

public:
	Tower();
	void show();
	bool checkCombinaison();
	void addHanoi(Hanoi hanoi);
	void removeHanoi();
	bool empty();
	int top();
	
};
#endif


