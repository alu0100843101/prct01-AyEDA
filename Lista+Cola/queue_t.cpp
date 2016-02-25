#include "queue_t.hpp"

	//CONSTRUCTOR.
	queue_t::queue_t(void): 
    L_()
	{}
	
	//DESTRUCTOR.
	queue_t::~queue_t(void)	
	{}
	
	//INSERTAR DATO AL FINAL DE LA COLA.
	void queue_t::insert(TDATO dato)  													
	{
		L_.insert_begin(new node_t(dato));
	}
	
	//EXTRAER DATO DEL INICIO DE LA COLA. 
	TDATO queue_t::extract(void)
	{
		node_t * aux = (node_t*) (L_.extract_end());
		return aux -> get_dato();
	}
	
	//¿COLA VACÍA?
	bool queue_t::empty(void)
	{
	    return(L_.empty());
	}
	
	//IMPRIMIR COLA.
	void queue_t::write(ostream& os)
	{
		while(!empty())
		{
			os << "[ " << extract() << " ] -> ";
		}
		os << endl << "Tamano de la Cola: " << L_.get_size();
	}
	
	
	
	
	