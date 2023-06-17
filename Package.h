#ifndef PACKAGE_H
#define PACKAGE_H
#include <iostream>
using namespace std;

class Package
{
    public:
        string producto;
        string caja;
        string destino;
        double peso;

        Package();
        virtual ~Package();

        Package(string producto, double peso);
        Package(string producto, double peso, double costo);

        void setDestino();
        void setPeso();
        void setCosto();

        string getDestino();
        double getPeso();
        double getCosto();

    protected:

    private:
};

#endif // PACKAGE_H
