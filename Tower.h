#ifndef TOWER_H
#define TOWER_H
#include"Hanoi.h"
#include<stack>

class Tower
{
private:
	int m_size;	
	int combinaison[3];
public:
	Tower(int size);
	void show();
	bool checkCombinaison();
	std::stack<Hanoi> stack;
};
#endif


