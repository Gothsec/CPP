#ifndef PACKAGE_H
#define PACKAGE_H

#include <iostream>
using namespace std;

class Package {
    public:
        string box;
        string product; //basico: comida, fragiles, miscelania -- avanzado: construccion, vehiculos
        double weight;
        string destiny;

        Package();
        ~Package();
        Package(string, string);
        Package(string, double, string);
        Package(string, double, string, string);

        void setBox();
        void setProduct();
        void setWeight();
        void setDestiny();

        string getBox();
        string getProduct();
        double getWeight();
        string getDestiny();

        void setData();
};




#endif //PACKAGE_H
