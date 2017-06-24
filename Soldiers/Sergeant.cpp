#include "Sergeant.h"
#include <cstring>
#include <iostream>

Sergeant::Sergeant()
{
	this->soldiers = nullptr;
	this->length = 0;
}
Sergeant::Sergeant(char* name, int yearsOld, int fightingSkills, int salary, Soldier* soldiers, int length) :Soldier(name, yearsOld, fightingSkills, salary), soldiers(nullptr)
{
	this->length = length;
	delete[] this->soldiers;
	this->soldiers = new Soldier[length];
	for (int i = 0; i < length; ++i)
	{
		this->soldiers[i] = soldiers[i];
	}
}
Sergeant::~Sergeant()
{
	delete[] soldiers;
}
void Sergeant::print()
{
	Soldier::print();
	for (int i = 0; i < length; i++)
	{
		soldiers[i].Soldier::print();
	}
}