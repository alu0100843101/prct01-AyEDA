#pragma once

#include "node_t.hpp"

class list_t{
	
	private:
		node_t* inicio_; //Puntero al principio de la lista.										
		node_t* fin_; //Puntero al final de la lista.		
		
	public:
		list_t(void); //Constructor por defecto.
		virtual ~list_t(void); //Destructor.
		
		void write(ostream& os); //Mostrar lista por el flujo que se le pasa a os.
		
		void reset(void); //Vaciar lista. 
		
		bool empty(void); //Comprobar si la lista está vacía.
		
		void insert_empty(node_t* n); //Insertar nodo Cuando la lista está vacía.
		void insert_begin(node_t* n); //Insertar nodo al principio de la lista, la lista en este caso ya no está vacía.
		void insert_end(node_t* n);	 //Insertar nodo al final de la lista, la lista en este caso ya no está vacía.
		
		node_t* extract_begin(void); //Extraer nodo del principio de la lista.
		node_t* extract_end(void); //Extraer nodo del final de la lista.
};