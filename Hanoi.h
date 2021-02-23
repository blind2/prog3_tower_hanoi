#ifndef HANOI_H
#define HANOI_H
class Hanoi
{
private:
	int m_type;
public:
	Hanoi(int type);
	Hanoi();
	void show();
	int getType();
};
#endif

