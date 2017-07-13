#pragma once
#include "Spell.h"
#include <iostream>

class MagicBook
{
	Spell* spell;
	int length;
	void SpellCreator(Spell* spell, int length);
public:
	MagicBook();
	MagicBook(Spell* spell, int length);
	MagicBook(MagicBook const& spell);
	MagicBook& operator=(MagicBook const& spell);
	~MagicBook();
	void AddSpell(Spell const& spell);
	void EraseSpell();
	void print();
};