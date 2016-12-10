#include "stdio.h"
#include "Fifi.h"
// for select = 0 add, =1, subt 


Fifi::Fifi()
{
	a = 2;
	b = 3;
	printf("Fifi object has been created\n");
}


Fifi::~Fifi()
{
}

int Fifi::function(int a, int b)
{
	soln = a + b;
	printf("soln = %d \n", soln);
	return soln;
}