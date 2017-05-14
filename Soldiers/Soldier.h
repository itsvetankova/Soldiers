#pragma once

class Soldier
{
	char* name;
	int yearsOld;
	int fightingSkills;
	int salary;
	void SoldierCreationHelper(char* name, int yearsOld, int fightingSkills, int salary);
public:
	Soldier();
	Soldier(char*, int, int, int);
	Soldier(Soldier const&);
	Soldier& operator=(Soldier const&);
	~Soldier();
	char* getName();
	int getYears();
	int getFightingSkills();
	int getSalary();
	void print();
};