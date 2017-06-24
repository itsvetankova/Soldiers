#include "Soldier.h"
#include "Sergeant.h"

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
	A.print();
	Soldier soldiers[5] = { A,  B, C, D, E};
	Sergeant T("Name", 20,5,200, soldiers,3);
	T.print();
	return 0;
}