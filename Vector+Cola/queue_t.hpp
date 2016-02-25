#pragma once
#include "vector_t.hpp"

class queue_t{

	private:
		vector_t v_; //Vector donde se guardan los datos de la cola.
		int front_;	//Posicion del primer elemento.
		int rear_; //Posicion del ultimo elemento.
		
	public:
		queue_t(void); //Constructor por defecto.														
		~queue_t(void);	//Destructor.		
		
		void insert(TDATO dato); //Inserta elementos al final de la cola. 													
		TDATO extract(void); //Extrae elementos del inicio de la cola.													
		
		void reset(void); //Elimina la cola.													
		
		bool empty(void); //¿Cola Vacía?
		
		void write(ostream& os); //Imprimir cola.
};