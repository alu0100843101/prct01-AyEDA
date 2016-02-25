#pragma once
#include "list_t.hpp"

class queue_t{

	private:
		list_t L_;
		
	public:
		queue_t(void); //Constructor por defecto.														
		~queue_t(void);	//Destructor.		
		
		void insert(TDATO dato); //Inserta elementos al final de la cola. 													
		TDATO extract(void); //Extrae elementos del inicio de la cola.													
		
		bool empty(void); //¿Cola Vacía?
		
		void write(ostream& os); //Imprimir cola.
		
		inline int get_size() {return L_.get_size();}
};