#pragma once
#include <iostream>

class Spell
{
protected:
	char* type;
	double neededPower;
	void SpellCreator(char* type, double neededPower);
public:
	Spell();
	Spell(char* type, double neededPower);
	Spell(Spell const& other);
	Spell& operator=(Spell const& other);
	~Spell();
	char* GetType() const
	{
		return this->type;
	}
	double GetNeededPower() const
	{
		return this->neededPower;
	}
	friend std::ostream& operator<<(std::ostream& os, Spell const& spell);
	bool operator==(const Spell& spell) const;
	void print();
};