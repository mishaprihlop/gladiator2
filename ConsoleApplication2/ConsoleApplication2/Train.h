#pragma once
#include<iostream>
#include<string.h>
class Train
{
private:
	char name[20];
	int time;
	int num;
public:
	Train();
	Train(char* a, int b, int c);
	Train operator = (const Train& a);
	bool operator < (const Train& a);
	bool operator > (const Train& a);
	friend std::ostream& operator << (std::ostream& os, Train& a);
	friend std::istream& operator >> (std::istream& is, Train& a);
};

