#include "Sergeant.h"
#include <cstring>
#include <iostream>

Sergeant::Sergeant()
{
	this->soldiers = nullptr;
	this->length = 0;
}
Sergeant::Sergeant(char* name, int yearsOld, int fightingSkills, int salary, Soldier** soldiers, int length) :Soldier(name, yearsOld, fightingSkills, salary), soldiers(nullptr)
{
	SergeantCreator(soldiers,length);
}
Sergeant::Sergeant(Sergeant const& other) :Soldier(other), soldiers(nullptr)
{
	SergeantCreator(other.soldiers, other.length);
}
Sergeant& Sergeant::operator=(Sergeant const& other)
{
	Soldier::operator=(other);
	DeleteSergeant();
	SergeantCreator(other.soldiers, other.length);
	return *this;
}
Sergeant::~Sergeant()
{
	DeleteSergeant();
}
void Sergeant::print()
{
	Soldier::print();
	for (int i = 0; i < length; i++)
	{
		soldiers[i]->print();
	}
}
void Sergeant::SergeantCreator(Soldier** soldiers, int length)
{
	this->length = length;
	this->soldiers = new Soldier*[length];
	for (int i = 0; i < length; ++i)
	{
		this->soldiers[i] = new Soldier(*soldiers[i]);
	}
}
void Sergeant::DeleteSergeant()
{
	for (int i = 0; i < length; ++i)
	{
		delete soldiers[i];
	}
	delete[] soldiers;
}