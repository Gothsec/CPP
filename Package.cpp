#include "Package.h"

#include <iostream>

//default Builder
Package::Package() {
    box = "-";
    product = "-";
    weight = 0;
    destiny = false;
}

Package::~Package() {
    //dest
}

//Overloaded Builders
void Package::setPackage(string box_) {
    box = box_;
    weight = 100;
}

void Package::setPackage(string box_, double weight_) {
    box = box_;
    weight = weight_;
}

void Package::setPackage(string box_, double weight_, bool destiny_) {
    box = box_;
    weight = weight_;
    destiny = destiny_;
}

//Functions
string Package::setProduct(bool type) {
    int opc;
    cout<<"Materiales a transportar"<<endl;
    cout<<"1. Comida"<<endl;
    cout<<"2. Cristaleria"<<endl;
    cout<<"3. Miscelania"<<endl;
    if (type == true) {
        cout<<"4. Construccion"<<endl;
        cout<<"5. Vehiculos"<<endl;
    }
    cout<<"Ejila una opcion: ";
    cin>>opc;
    cout<<endl;
    
    switch (opc) {
        case 1: product = "Comida"; break;

        case 4:
            if (type == true) {
                product = "Construccion"; break;
            } else {
                cout<<"Opcion incorrecta"; break;
            }
        case 5:
            if (type == true) {
                product = "Vehiculos"; break;
            } else {
                cout<<"Opcion incorrecta"; break;
            }
    
        default: cout<<"Opcion incorrecta"; break;
    }
    return product;
}


string Package::getBox() {
    return box;
}

string Package::getProduct() {
    return product;
}

double Package::getWeight() {
    return weight;
}

bool Package::getDestiny() {
    return destiny;
}
