#include "Spell.h"
#include <cstring>

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