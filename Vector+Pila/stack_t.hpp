#pragma once
#include "vector_t.hpp"

class stack_t{

	private:
		vector_t v_; //Vector donde se guardan los datos de la pila.
		int top_;	//Posicion del  elemento en lo alto de la pila.
		
	public:
		stack_t(void); //Constructor por defecto.														
		~stack_t(void);	//Destructor.													
		
		void push(TDATO dato); //Inserta elementos en lo alto de la pila. 													
		TDATO pop(void); //Extrae elementos de lo alto de la pila.		
		
		void reset(void); //Elimina la pila.
		
		bool empty(void); //¿Pila Vacía?
		
		void write(ostream& os); //Imprimir pila.
};