#pragma once

class Spell
{
	char* type;
	double neededPower;
	void SpellCreator(char* type, double neededPower);
public:
	Spell();
	Spell(char* type, double neededPower);
	Spell(Spell const& other);
	Spell& operator=(Spell const& other);
	~Spell();
};