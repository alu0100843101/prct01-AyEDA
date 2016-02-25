#include "queue_t.hpp"

	//CONSTRUCTOR.
	queue_t::queue_t(void): 
    v_(0),
    rear_(-1),
    front_(0)
	{}
	
	//DESTRUCTOR.
	queue_t::~queue_t(void)	
	{
	    rear_ = -1;
	    front_ = 0;
	    reset();
	}
	
	//INSERTAR DATO AL FINAL DE LA COLA.
	void queue_t::insert(TDATO dato)  													
	{
	    rear_++;
	    v_.set_data(rear_, dato);
	}
	
	//EXTRAER DATO DEL INICIO DE LA COLA. 
	TDATO queue_t::extract(void)
	{
	    if(!empty())
	    {
		    TDATO aux = v_.get_data(front_);
		    front_++;
		    return aux;
	    }
	    else
	    {
		    cerr << "SORRY, EMPTY QUEUE!" << endl;
		    exit(1);
	    }
	}
	
	//ELIMINAR COLA.
	void queue_t::reset(void)
	{
	    while(!empty())
	    {
		    TDATO aux = v_.get_data(front_);
		    front_++;
	    }	
    }
	
	//¿COLA VACÍA?
	bool queue_t::empty(void)
	{
	    return(rear_ < front_);
	}
	
	//IMPRIMIR COLA.
	void queue_t::write(ostream& os)
	{
		os << "[ ";
		while(!empty())
		{
			if(front_!=rear_)
	    		os << extract() << ", ";
	    	else
	    		os << extract() << " ]";
		}
	}
	
	
	
	
	