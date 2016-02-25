#include "vector_t.hpp"

//CONSTRUCTOR POR DEFECTO.
vector_t::vector_t(void): 
    sz_(0),
    item_(NULL)
    {}
    
//CONSTRUCTOR COPIA.
vector_t::vector_t(int size):
    sz_(0),
    item_(NULL)
    {
        build(size);
    }
    
//CREACIÓN DEL VECTOR.
void vector_t::build(int size)
{
    sz_=size;
    item_ = new TDATO [sz_];
}

//DESTRUCTOR POR DEFECTO.
vector_t::~vector_t(void)
{
    clean();
}

//DESTRUCTOR.
void vector_t::clean(void)
{
    if (item_ != NULL){
		delete [] item_;
		item_ = NULL;
	}
	
	sz_=0;
}

//REDIMENSIONAR EL VECTOR.
 void vector_t::resize(int size)
 {
     clean();
     build(size);
 }
 
 //OBTENER EL TAMAÑO DEL VECTOR. 
 int vector_t::get_size(void)
 {
     return sz_;
 }
 
 //SOBRECARGA DEL OPERADOR []
 TDATO& vector_t::operator[] (int pos)
 {
     return item_[pos];
 }
        
 TDATO vector_t::operator[] (int pos) const
 {
     return item_[pos];
 }
 
 //OBTENER EL DATO DEL VECTOR.
 TDATO vector_t::get_data(int pos)
 {
     return item_[pos];
 }
 
 //INTRODUCIR UN DATO EN EL VECTOR.
 void vector_t::set_data(int pos, TDATO dato)
 {
     item_[pos] = dato;
 }
 
 //IMPRIMIR VECTOR POR PANTALLA.
 void vector_t::write(ostream& os)
    {
		os << "[ ";
		for(int i = 0; i < get_size(); i++){
			if(i!=get_size()-1)
			{
				os << item_[i] << ", ";
			}
			else
			{
				os << item_[i];
			}
		}
		os << " ]" << endl << endl;;
	}
 