
#include "list_t.hpp"
#include <iostream>

#define LISTA_SIZE 10

int main(void)
{
	list_t A;
	list_t B;
	
	for(int i=0; i<5; i++)
	{
		A.insert_begin(new node_t(i));
	}

	cout << "Lista A: ";
	
	A.write(cout);
	cout << endl << endl;
	
	for(int i=0;i<5;i++)
	{
		B.insert_end(new node_t(i));
	}
	
	
	cout << "Lista B: ";
	
	B.write(cout);
	cout << endl;
}
