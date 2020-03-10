#include "Train.h"

Train::Train()
{
	name[0] = ' /0 ';
	time = 0;
	num = 0;
}

Train::Train(char* a, int b, int c)
{
	strcpy(name, a);
	time = b;
	num = c;
}

Train Train::operator=(const Train& a)
{
	strcpy(name, a.name);
	time = a.time;
	num = a.num;
	return *this;
}

bool Train::operator<(const Train& a)
{
	return time < a.time;
}

bool Train::operator>(const Train& a)
{
	return time > a.time;
}

std::ostream& operator<<(std::ostream& os, Train& a)
{
	return os << a.name << ' ' << a.time << ' ' << a.num;
}

std::istream& operator>>(std::istream& is, Train& a)
{
	return is >> a.name >> a.time >> a.num;
}
