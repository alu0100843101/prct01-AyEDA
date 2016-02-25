 #include "list_t.hpp"
 
	list_t::list_t(void):
	inicio_(NULL),
	fin_(NULL),
	sz_(0)
	{}
	
	list_t::~list_t(void)
	{
		inicio_ = NULL;
		fin_ = NULL;
	}
		
	void list_t::write(ostream& os)
	{
		node_t* aux = inicio_;
		while(aux != NULL)
		{
			os << "[ "; 
			aux->write(os);
			aux=aux->get_next();
			os << " ] -> ";
		}
	}
	
	bool list_t::empty(void) 
	{ 
		return (inicio_==NULL); 
	}	
		
	void list_t::insert_empty(node_t* n)
	{
		inicio_=n;
		fin_=n;
	}
		
	void list_t::insert_begin(node_t* n)
	{
		if(empty()) 
			insert_empty(n);
		else { 
	  		n->set_next(inicio_);
	  		inicio_=n;
		}
		sz_++;
	}
	
	void list_t::insert_end(node_t* n)
	{
		if(empty()) 
			insert_empty(n);
		else {
			fin_->set_next(n);
			fin_=n;
		}
	}
		
	node_t* list_t::extract_begin(void)
	{
		if(inicio_==fin_)
		{
			node_t* aux=inicio_;
			inicio_=NULL;
			fin_=NULL;
			return aux;
		}
		else
		{
			node_t* aux = inicio_;
			inicio_=inicio_->get_next();
			return aux;
		}
	}
	
	node_t* list_t::extract_end(void)
	{
		node_t* aux=inicio_;
		
		if(inicio_==fin_)
		{
			inicio_=NULL;
			fin_=NULL;
		}
		else
		{
			while(aux->get_next() != fin_)
				aux=aux->get_next();
	    
	    	fin_= aux;
	    	aux=aux->get_next();
	    	fin_->set_next(NULL);
		}
		return aux;
	}
