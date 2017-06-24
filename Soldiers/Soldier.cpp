#include "Soldier.h"
#include <iostream>
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
	SoldierCreationHelper(name, yearsOld, fightingSkills, salary);
}
Soldier::Soldier(Soldier const& other): name(nullptr)
{
	SoldierCreationHelper(other.name, other.yearsOld, other.fightingSkills, other.salary);
}
Soldier& Soldier::operator=(Soldier const& other)
{
	if (this != &other)
	{
		SoldierCreationHelper(other.name, other.yearsOld, other.fightingSkills, other.salary);
	}
	return *this;
}
void Soldier::SoldierCreationHelper(char* name, int yearsOld, int fightingSkills, int salary)
{
	delete[] this->name;
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
	this->yearsOld = yearsOld;
	this->fightingSkills = fightingSkills;
	this->salary = salary;
}
Soldier::~Soldier()
{
	delete[] name;
}
void Soldier::print()
{
	if (this->name != nullptr)
	{
		std::cout << "Name: " << this->getName() << std::endl <<
			"Years: " << this->getYears() << std::endl <<
			"Fighting skills: " << this->getFightingSkills() << std::endl <<
			"Salary: " << this->getSalary() << std::endl;
	}
	else
	{
		std::cout << "There's no information\n";
	}
}
char* Soldier::getName()
{
	return this->name;
}
int Soldier::getYears()
{
	return this->yearsOld;
}
int Soldier::getFightingSkills()
{
	return this->fightingSkills;
}
int Soldier::getSalary()
{
	return this->salary;
}