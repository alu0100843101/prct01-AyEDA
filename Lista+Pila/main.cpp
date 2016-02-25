#include "stack_t.hpp"

int main(void) 
{
	stack_t A;

	for(int i = 0; i < 5; i++)
	{
		A.push(i);
	}
    
    cout << "La pila es: ";
    A.write(cout);
    
    cout << endl << endl;
}