#include "Sergeant.h"
#include <cstring>
#include <iostream>

Sergeant::Sergeant()
{
	this->name = nullptr;
	this->soldiers = nullptr;
	this->length = 0;
}
Sergeant::Sergeant(char* name, Soldier* soldiers, int length) :name(nullptr), soldiers(nullptr)
{
	delete[] this->name;
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
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
	delete[] name;
	delete[] soldiers;
}
void Sergeant::print()
{
	if (this->name != nullptr)
	{
		std::cout << this->name;
	}
	else
	{
		std::cout << "NO";
	}
	
}