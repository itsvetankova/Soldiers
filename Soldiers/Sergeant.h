#pragma once
#include "Soldier.h"

class Sergeant :public Soldier
{
	char* name;
	Soldier* soldiers;
	int length;
public:
	Sergeant();
	Sergeant(char* name, Soldier* soldiers, int length);
	Sergeant(Sergeant const& other);
	Sergeant& operator=(Sergeant const& other);
	~Sergeant();
	void print();
};