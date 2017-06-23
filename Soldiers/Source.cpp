#include "Soldier.h"
#include "Sergeant.h"

int main()
{
	Soldier A("DD", 12, 5, 7);
	Soldier B;//(A);
	//B = A;
	B.print();
	Soldier soldiers[5];
	Sergeant T("NAME",soldiers, 4);
	T.print();
	return 0;
}