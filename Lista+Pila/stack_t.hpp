#pragma once
#include "list_t.hpp"

class stack_t{

	private:
		list_t L_; //Vector donde se guardan los datos de la pila.
		
	public:
		stack_t(void); //Constructor por defecto.														
		~stack_t(void);	//Destructor.													
		
		void push(TDATO dato); //Inserta elementos en lo alto de la pila. 													
		TDATO pop(void); //Extrae elementos de lo alto de la pila.		
		
		bool empty(void); //¿Pila Vacía?
		
		void write(ostream& os); //Imprimir pila.

		inline int get_size() {return L_.get_size();}
};