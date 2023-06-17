#include "Cargo.h"
#include "Package.h"
#include <iostream>
using namespace std;

Cargo::Cargo(Package producto_, string trailer_, double precio_) {
    producto = producto_;
    trailer = trailer_;
    precio = precio_;
}

Cargo::~Cargo()
{
    //dtor
}

void Cargo::setCargo(){
    setProducto();
    setTrailer();
    setPrecio();

    Cargo(getProducto(), getTrailer(), getPrecio());
}

void Cargo::setProducto(){
    cout<<"Ingrese el tipo de producto del cargamento: "<<endl;
    
}
void Cargo::setTrailer(){
    int opc;
    cout<<"Que tipo de trailer se usara: "<<endl;
    cout<<"1) Trailer Box"<<endl;
    cout<<"2) Trailer Abierto"<<endl;
    cout<<"3) Trailer Frigorifico"<<endl;
    cout<<"Opcion: "<<endl;
    fflush(stdin);
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
}
void Cargo::setPrecio(){
    cout<<"Ingrese el precio del cargamento: "<<endl;
    fflush(stdin);
    cin>>precio;
}

void Cargo::setData(){
    producto = "-";
    trailer = "-";
    precio = 0;

    Cargo(producto, trailer, precio);
}

string Cargo::getProducto(){
    return producto;
}

string Cargo::getTrailer(){
    return trailer;
}

double Cargo::getPrecio(){
    return precio;
}
