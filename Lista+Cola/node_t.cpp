#include "node_t.hpp"

	node_t::node_t(void):
	dato_(0),
	next_(NULL)
	{}
	
	node_t::node_t(TDATO dato):
	dato_(dato),
	next_(NULL)
	{}
	
	node_t::~node_t(void)
	{}
	
	void node_t::set_next(node_t* next)
	{
		next_ = next;
	}
	
	node_t* node_t::get_next(void) 
	{ 
		return next_; 
	}	


	void node_t::set_dato(TDATO dato)
	{
		dato_ = dato;
	}

	TDATO node_t::get_dato()
	{
		return dato_;
	}
	
	void node_t::write(ostream& os)
	{
		os << dato_;
	}