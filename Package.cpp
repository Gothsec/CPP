#include "Package.h"

#include <iostream>

//default Builder
Package::Package() {
    box = "-";
    product = "-";
    weight = 50;
    destiny = "nacional";
}

Package::~Package() {
    //dest
}

//Overloaded Builders
Package::Package(string box_, string product_) {
    box = box_;
    product = product_;
}

Package::Package(string box_, double weight_, string product_) {
    box = box_;
    weight = weight_;
    product = product_;
}

Package::Package(string box_, double weight_, string product_, string destiny_) {
    box = box_;
    weight = weight_;
    product = product_;
    destiny = destiny_;
}

//Functions
void Package::setBox() {
    fflush(stdin);
    cout<<"Ingrese tipo de embalaje: ";
    getline(cin, box);
}

void Package::setProduct() {
    fflush(stdin);
    cout<<"Ingrese el producto a llevar: ";
    getline(cin, product);
}

void Package::setWeight() {
    cout<<"Ingrese el peso: ";
    cin>>weight;
}

void Package::setDestiny() {
    fflush(stdin);
    cout<<"Ingrese el destino: ";
    getline(cin, destiny);
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

string Package::getDestiny() {
    return destiny;
}

void setData() {
    
}
