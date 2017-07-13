#include "Spell.h"
#include <cstring>
#include <iostream>

Spell::Spell()
{
	this->type = nullptr;
	this->neededPower = 0;
}
Spell::Spell(char* type, double neededPower):type(nullptr)
{
	SpellCreator(type, neededPower);
}
Spell::Spell(Spell const& other) : type(nullptr)
{
	SpellCreator(other.type, other.neededPower);
}
Spell& Spell::operator=(Spell const& other)
{
	if (this != &other)
	{
		SpellCreator(other.type, other.neededPower);
	}
	return *this;
}
Spell::~Spell()
{
	delete[] type;
}
void Spell::SpellCreator(char* type, double neededPower)
{
	delete[] this->type;
	this->type = new char[strlen(type) + 1];
	strcpy(this->type, type);
	this->neededPower = neededPower;
}
void Spell::print()
{
	if (this->type != nullptr)
	{
		std::cout <<"Type: "<< this->type<< std::endl <<"Needed power: " << this->neededPower<< std::endl << std::endl;
	}
	else
	{
		std::cout << "No info";
	}
}
bool Spell::operator==(const Spell& spell) const
{
	if (spell.type == nullptr && spell.neededPower == 0)
	{
		return true;
	}
	else
		return false;
}
std::ostream& operator<<(std::ostream& os, Spell const& spell)
{
	if (spell.GetType() == nullptr && spell.GetNeededPower() == 0)
	{
		return os;
	}
	return os <<"Spell type: "<< spell.GetType() << std::endl <<"Needed power: "<< spell.GetNeededPower() << std::endl;
}