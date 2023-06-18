//Manuel Builes - 2264325-2724
//Oscar Hernandez - 2264488 - 2724
//Camilo Garcia - 2264484-2724
//Alejandro Cuenca - 2264475-2724

#ifndef CARGO_H
#define CARGO_H

#include "Package.h"
#include <iostream>
using namespace std;

class Cargo
{
    public:
        Package producto;
        string trailer;
        double precio;

        void setProducto(Package);
        void setTrailer();
        void setPrecio();
        // void setData(Package);

        Package getProducto();
        string getTrailer();
        double getPrecio();

        Cargo();
        virtual ~Cargo();

    protected:

    private:
};

#endif // CARGO_H
