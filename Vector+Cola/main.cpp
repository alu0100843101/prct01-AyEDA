#include "queue_t.hpp"

int main(void) 
{
	queue_t A;

	for(int i = 0; i < 5; i++)
	{
		A.insert(i);
	}
    
    cout << "La cola es: ";
    A.write(cout);
    
    cout << endl << endl;
}