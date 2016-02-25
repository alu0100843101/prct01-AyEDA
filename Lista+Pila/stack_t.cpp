#include "stack_t.hpp"

    //CONSTRUCTOR.
    stack_t::stack_t(void):
	L_()
	{}
	
	//DESTRUCTOR.
	stack_t::~stack_t(void)
	{}
	
	//INSERTAR ELEMENTOS EN LO ALTO DE LA PILA.
	void stack_t::push(TDATO dato)
	{
	    L_.insert_end(new node_t(dato));
	}
	
	//EXTRAER ELEMENTOS DE LO ALTO DE LA PILA.
	TDATO stack_t::pop(void)
	{
	    node_t* aux = (node_t*) L_.extract_end();
		if (aux!=NULL){
			return aux->get_dato();
		}
		else{
			cerr << "SORRY, EMPTY STACK!" << endl;
		}
	}
    
	//¿PILA VACÍA?
	bool stack_t::empty(void)
	{
		return(L_.empty());
	}

	//IMPRIMIR PILA.
	void stack_t::write(ostream& os)
	{
		while(!empty())
		{
			os << "[ " << pop() << " ] -> ";
		}
		os << endl << "Tamano de la Pila: " << L_.get_size();
	}
	
	
	
	