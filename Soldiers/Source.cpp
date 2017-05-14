#include "Soldier.h"

int main()
{
	Soldier A("DD", 12, 5, 7);
	Soldier B;//(A);
	//B = A;
	B.print();
	return 0;
}