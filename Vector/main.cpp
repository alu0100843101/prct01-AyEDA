#include "vector_t.hpp"

int main(void) 
{
	vector_t A(10);
	vector_t B;

	B.resize(5);

	for(int i = 0; i < 5; i++)
	{
		A[i] = i;
		B[i] = i+5;
	}

	B[3] = 25;

	const vector_t& C = A;

	A[2] = 6;
    //C[2] = 3; //Error de compilación. No podemos modificar C, ya que es una referencia constante a A.

    vector_t& D = A;
    D[2] = 3;

    cout << "POSICIÓN 3 DE C: { " << C[2] << " }" << endl << endl;
   
    cout << "VECTOR A: ";
    A.write(cout);
    
    A.set_data(3, 5);
    cout << "VECTOR A (poniendo un 5 en la pos 4): ";
    A.write(cout);
}