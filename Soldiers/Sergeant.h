#pragma once
#include "Soldier.h"

class Sergeant :public Soldier
{
	char* Sergantname;
	Soldier* soldiers;
	int length;
public:
	Sergeant();
	Sergeant(char* name, int yearsOld, int fightingSkills, int salary, Soldier* soldiers, int length);
	Sergeant(Sergeant const& other);
	Sergeant& operator=(Sergeant const& other);
	~Sergeant();
	void print();
};