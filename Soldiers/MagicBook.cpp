#include "MagicBook.h"
#include <iostream>

MagicBook::MagicBook()
{
	this->spell = nullptr;
	this->length = 0;
}
MagicBook::MagicBook(Spell* spell, int length) : spell(nullptr)
{
	SpellCreator(spell, length);
}
MagicBook::MagicBook(MagicBook const& other) : spell(nullptr)
{
	SpellCreator(other.spell, other.length);
}
MagicBook& MagicBook::operator=(MagicBook const& other)
{
	if (this != &other)
	{
		SpellCreator(other.spell, other.length);
	}
	return *this;
}
MagicBook::~MagicBook()
{
	delete[] spell;
}
void MagicBook::AddSpell(Spell const& spell)
{

}
void MagicBook::EraseSpell()
{

}
void MagicBook::SpellCreator(Spell* spell, int length)
{
	this->length = length;
	delete[] this->spell;
	this->spell = new Spell[length + 1];
	for (int i = 0; i < length; ++i)
	{
		this->spell[i] = spell[i];
	}
}
void  MagicBook::print()
{
	if (this->spell != nullptr)
	{
		for (int i = 0; i < length; ++i)
		{
			std::cout << this->spell[i] << std::endl;
		}
	}
}