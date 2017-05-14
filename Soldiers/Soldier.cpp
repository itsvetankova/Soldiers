#include "Soldier.h"
#include <cstring>
Soldier::Soldier()
{
	this->name = nullptr;
	this->fightingSkills = 0;
	this->yearsOld = 0;
	this->salary = 0;
}
Soldier::Soldier(char* name, int yearsOld, int fightingSkills, int salary):name(nullptr)
{
	this->yearsOld = yearsOld;
	this->fightingSkills = fightingSkills;
	this->salary = salary;
	delete[] this->name;
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
}
Soldier::Soldier(Soldier const& other)
{
	this->yearsOld = other.yearsOld;
	this->fightingSkills = other.fightingSkills;
	this->salary = other.salary;
	//?delete[] this->name;
	this->name = new char(strlen(other.name) + 1);
	strcpy(this->name, other.name);
}
Soldier& Soldier::operator=(Soldier const& other)
{
	this->yearsOld = other.yearsOld;
	this->fightingSkills = other.fightingSkills;
	this->salary = other.salary;

	return *this;
}