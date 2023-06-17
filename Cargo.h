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
        void setData(Package);

        Package getProducto();
        string getTrailer();
        double getPrecio();

        Cargo(Package, string, double);
        virtual ~Cargo();

    protected:

    private:
};

#endif // CARGO_H
