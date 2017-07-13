#include "Soldier.h"
#include "Sergeant.h"
#include "Spell.h"
#include "MagicBook.h"

int main()
{
	Soldier A("DD", 12, 5, 7);
	Soldier B=A;//(A);
	B = A;
	Soldier C;//(A);
	C = A;
	Soldier D;//(A);
	D = A;
	Soldier E;//(A);
	E = A;
	//A.print();
	Soldier* soldiers[5] = {new Soldier(A), new Soldier(B), new Soldier(C), new Soldier(D), new Soldier(E)};

	Sergeant T("Name", 20,5,200, soldiers,3);

	Soldier* F = new Sergeant(T);
	//F->print();
	//T.print();
	Spell S("mySpell", 15);
	Spell My = S;
	Spell Y("T", 45);
	Spell spell[3] = { S, My, Y};
	MagicBook M(spell, 3);
	My.print();
	M.print();
	return 0;
}