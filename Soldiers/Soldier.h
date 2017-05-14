#pragma once

class Soldier
{
	char* name;
	int yearsOld;
	int fightingSkills;
	int salary;
public:
	Soldier();
	Soldier(char*, int, int, int);
	Soldier(Soldier const&);
	Soldier& operator=(Soldier const&);
	~Soldier();
	char* getName();
	int getYears();
	int getFightingSkils();
	int getSalary();
};