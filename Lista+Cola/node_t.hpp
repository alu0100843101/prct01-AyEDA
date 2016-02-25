#pragma once

#include <cstdio>
#include <iostream>

using namespace std;

typedef int TDATO;

class node_t
{
	private:
		node_t* next_; //Puntero al siguiente nodo
		TDATO dato_;
		
	public:
		node_t(void); //Constructor por defecto.
		node_t(TDATO dato); //Constructor con parámetros.
		virtual ~node_t(void);	//Destructor.
		
		void set_next(node_t* next); //Poner el puntero que apunte al siguiente nodo.
		node_t* get_next(void);	//Obtener puntero al siguiente nodo.
		
		void set_dato(TDATO dato);
		TDATO get_dato(void); 
		
		virtual void write(ostream& os); //Función virtual para imprimir el nodo.
};
