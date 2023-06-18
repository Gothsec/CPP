//Manuel Builes - 2264325-2724
//Oscar Hernandez - 2264488 - 2724
//Camilo Garcia - 2264484-2724
//Alejandro Cuenca - 2264475-2724

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
