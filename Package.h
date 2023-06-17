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
        Package(string, string);
        Package(string, double, string);
        Package(string, double, string, bool);

        void setBox();
        void setProduct();
        void setWeight();
        void setDestiny();

        string getBox();
        string getProduct();
        double getWeight();
        bool getDestiny();

};

#endif //PACKAGE_H
