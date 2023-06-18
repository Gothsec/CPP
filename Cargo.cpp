//Manuel Builes - 2264325-2724
//Oscar Hernandez - 2264488 - 2724
//Camilo Garcia - 2264484-2724
//Alejandro Cuenca - 2264475-2724

#include "Cargo.h"
#include "Package.h"
#include <iostream>
using namespace std;

Cargo::Cargo() {
    trailer = "-";
    precio = 0;
}

Cargo::~Cargo() {
    //dtor
}

void Cargo::setProducto(Package producto_) {
    producto = producto_;
}

void Cargo::setTrailer(){
    int opc;
    cout<<"Que tipo de trailer se usara: "<<endl;
    cout<<"1) Trailer Box"<<endl;
    cout<<"2) Trailer Abierto"<<endl;
    cout<<"3) Trailer Frigorifico"<<endl;
    cout<<"Opcion: ";
    cin>>opc;

    if(opc == 3){
        trailer = "Frigorifico";
        cout<<"- Ha elegido trailer frigorifico"<<endl;
    }else if(opc == 2){
        trailer = "Abierto";
        cout<<"- Ha elegido trailer Abierto"<<endl;
    }else if(opc == 1){
        trailer = "Box";
        cout<<"- Ha elegido trailer Box"<<endl;
    }else{
        cout<<"- Opcion incorrecta"<<endl;
    }
    cout<<endl;
}

void Cargo::setPrecio(){
    cout<<"Ingrese el precio del cargamento: ";
    cin>>precio;
    cout<<endl;
}

// void Cargo::setData(Package producto_){
//     producto = producto_;
//     trailer = "-";
//     precio = 0;

    // Cargo(producto, trailer, precio);
// }

Package Cargo::getProducto(){
    return producto;
}

string Cargo::getTrailer(){
    return trailer;
}

double Cargo::getPrecio(){
    return precio;
}
