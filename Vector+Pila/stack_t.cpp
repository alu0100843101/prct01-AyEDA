#include "stack_t.hpp"

    //CONSTRUCTOR.
    stack_t::stack_t(void):
	v_(0),
	top_(-1)
	{}
	
	//DESTRUCTOR.
	stack_t::~stack_t(void)
	{
		top_ = -1;
		reset();
	}
	
	//INSERTAR ELEMENTOS EN LO ALTO DE LA PILA.
	void stack_t::push(TDATO dato){		
		top_ ++;
		v_.set_data(top_, dato);
	}
	
	//EXTRAER ELEMENTOS DE LO ALTO DE LA PILA.
	TDATO stack_t::pop(void)
	{
		if (!empty()){
			TDATO aux = v_.get_data((top_));
			top_ --;
			
			return aux;
		}
		else{
			cerr << "SORRY, EMPTY STACK!" << endl;
			exit(1);
		}
	}
	
	//ELIMINAR PILA.
	void stack_t::reset(void)
	{
	    while(!empty())
	    {
		    TDATO aux = v_.get_data(top_);
		    top_--;
	    }	
    }
    
	//¿PILA VACÍA?
	bool stack_t::empty(void)
	{
		return(top_==-1);
	}

	//IMPRIMIR PILA.
	void stack_t::write(ostream& os)
	{
		os << "[ ";
		while(!empty())
		{
			if(top_!=0)
	    		os << pop() << ", ";
	    	else
	    		os << pop() << " ]";
		}
	}
	