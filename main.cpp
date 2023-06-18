#include <iostream>
#include <vector>
#include <stdlib.h>
#include "Cargo.h"
#include "Package.h"
using namespace std;

vector<Cargo> cargos;

//prototipos
void showDefault();
void overload1();
void overload2();
void overload3();
void listadoGeneral();
void credits();

// Implementacion

void showDefault() {
    Cargo obj;
    Package obj_p;
    cout<<"==== Constructor por defecto ===="<<endl;
    cout<<"Trailer: "<<obj.getTrailer()<<endl;
    cout<<"Precio: "<<obj.getPrecio()<<endl;
    cout<<"---- Producto ----"<<endl;
    cout<<"Embalaje: "<<obj_p.getBox()<<endl;
    cout<<"Material: "<<obj_p.getProduct()<<endl;
    cout<<"Peso: "<<obj_p.getWeight()<<endl;
    cout<<"Destino: "<<obj_p.getDestiny()<<endl;
    cout<<endl;
}

void overload1() {
    Cargo obj;
    Package obj_p;
    cout<<"Creando una carga Basica: "<<endl;
    obj_p.setProduct(false);
    cout<<"Peso maximo a llevar 100";
    obj_p.setPackage("Carton");

    obj.setTrailer();
    obj.setPrecio();
    obj.setProducto(obj_p);

    cargos.push_back(obj);
}

void overload2() {
    Cargo obj;
    Package obj_p;
    double peso = 0;
    cout<<"Creando una carga Intermedia: "<<endl;
    obj_p.setProduct(true);

    while (peso <= 0 || peso > 500) {
        cout<<"digite el peso a transportar 0-500: "; //una moto pesa menos de 500kg
        cin>>peso;
    }
    obj_p.setPackage("Madera", peso);

    obj.setTrailer();
    obj.setPrecio();
    obj.setProducto(obj_p);

    cargos.push_back(obj);
}

void overload3() {
    Cargo obj;
    Package obj_p;
    bool key = true;
    int x = 0;
    double peso = 0;
    bool transporte;
    cout<<"Creando una carga Acanzada: "<<endl;
    obj_p.setProduct(true);
    cout<<"digite el peso a transportar: ";
    cin>>peso;
    while (key != false) {
        cout<<"0. viaje nacional -- 1. internacional: ";
        cin>>x;
        if (x == 0) {
            transporte = false;
            key = false;
        }
        else if (x == 1) {
            transporte = true;
            key = false;
        } else {
            cout<<"Opcion incorrecta"<<endl<<endl;
        }
    }
    obj_p.setPackage("Metal", peso, transporte);

    obj.setTrailer();
    obj.setPrecio();
    obj.setProducto(obj_p);

    cargos.push_back(obj);
}

void defaultArguments() {
    Cargo obj;
    Package obj_p;
    obj_p.product = "Miscelania";
    obj_p.setPackage("Carton");

    obj.trailer = "Box";
    obj.precio = 10000;
    obj.setProducto(obj_p);

    cargos.push_back(obj);
    cout<<"Se a creando una carga Predeterminada"<<endl<<endl;
}

void listadoGeneral() {
    cout<<"===== Listado ====="<<endl;
    for (size_t i = 0; i < cargos.size(); i++) {
        cout<<"Trailer: "<<cargos[i].getTrailer()<<endl;
        cout<<"Precio: "<<cargos[i].getPrecio()<<endl;
        cout<<"----- Producto -----"<<endl;
        cout<<"Embalaje: "<<cargos[i].getProducto().getBox()<<endl;
        cout<<"Material: "<<cargos[i].getProducto().getProduct()<<endl;
        cout<<"Peso: "<<cargos[i].getProducto().getWeight()<<endl;
        cout<<"Destino: "<<cargos[i].getProducto().getDestiny()<<endl;
        cout<<endl;
    }
}

void menu() {
    int opc;
    do {
        cout << "===== Menu =====" << endl;
        cout << "1. Mostrar - constructor por defecto" << endl; //mostrar por defecto tiene mas sentido que adicionar por defecto: Manuel
        cout << "2. Adicionar - constructor sobrecargado 1" << endl;
        cout << "3. Adicionar - constructor sobrecargado 2" << endl;
        cout << "4. Adicionar - constructor sobrecargado 3" << endl;
        cout << "5. Adicionar - constructor con argumentos predeterminados" << endl; //La 5 y la 1 no son lo mismo?
        cout << "6. Listar" << endl;
        cout << "7. Acerca de..." << endl;
        cout << "8. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opc;
        cout<<endl;

        switch(opc) {
            case 1: showDefault(); break;
            case 2: overload1(); break;
            case 3: overload2(); break;
            case 4: overload3(); break;
            case 5: defaultArguments(); break;
            case 6: listadoGeneral(); break;
            case 7: credits(); break;
            case 8: break;
            default:
                cout << "Ingrese una opcion valida" << endl;
                break;
        }
    } while (opc != 8);
}

int main() {
    menu();

    cout<<endl;
    system("pause");
    return 0;
}

void credits() {
    cout<<"\t.:Creditos:.\n";
    cout<<"Autor1: Camilo Garcia    - 2264484-2724 \n";
    cout<<"Autor2: Oscar Hernandez  - 2264488-2724 \n";
    cout<<"Autor3: Manuel Builes    - 2264325-2724 \n";
    cout<<"Autor4: Alejandro Cuenca - 2264475-2724 \n";
    cout<<endl;
    cout<<"Version: 1";
    cout<<endl<<endl;
}
