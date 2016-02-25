#pragma once
//#ifndef_VECTOR_T_H
//#define_VECTOR_T_H

#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

typedef int TDATO;

class vector_t
{
    private: 
        int sz_; //Tamaño del vector.
        TDATO* item_; //Puntero a los datos del vector.
        
    public:
        vector_t (void); //Constructor por defecto.
        vector_t (int size); //Constructor con un tamaño de vector específico. 
        ~vector_t (void); //Destructor.
        
        void build(int size); //Construir el vector. 
        void clean(void); //Destruir el vector. 
        
        void resize(int size); //Redimensionar el vector. 
        int get_size(void); //Obtener el tamaño del vector. 
        
        void set_data(int pos, TDATO dato); //Modificar el valor del vector en la posicion pos. 
        TDATO get_data(int pos); //Obtener el valor del vector en la posicion pos. 
    
        TDATO& operator[] (int pos);
        TDATO operator[] (int pos) const;
        
        void write(ostream& os); //Imprimir vector a través de un flujo de salida (os).
};
//#endif

