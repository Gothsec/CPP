#ifndef PACKAGE_H
#define PACKAGE_H

#include <iostream>
using namespace std;

class Package {
    public:
        string box;
        string product; //basico: comida, fragiles, miscelania -- avanzado: construccion, vehiculos
        double weight;
        bool destiny; //false nacional -- true internacional

        Package();
        ~Package();
        void setPackage(string);
        void setPackage(string, double);
        void setPackage(string, double, bool);

        string setProduct(bool);

        string getBox();
        string getProduct();
        double getWeight();
        bool getDestiny();

};

#endif //PACKAGE_H
