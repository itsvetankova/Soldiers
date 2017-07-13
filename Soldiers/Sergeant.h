#pragma once
#include "Soldier.h"

class Sergeant :public Soldier
{
	Soldier** soldiers;
	int length;
	void SergeantCreator(Soldier** soldiers, int length);
	void DeleteSergeant();
public:
	Sergeant();
	Sergeant(char* name, int yearsOld, int fightingSkills, int salary, Soldier** soldiers, int length);
	Sergeant(Sergeant const& other);
	Sergeant& operator=(Sergeant const& other);
	~Sergeant();
	virtual void print();
};