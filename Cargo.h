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

        void setCargo();
        void setProducto();
        void setTrailer();
        void setPrecio();
        void setData();

        string getProducto();
        string getTrailer();
        double getPrecio();

        Cargo(Package, string, double);
        virtual ~Cargo();

    protected:

    private:
};

#endif // CARGO_H
