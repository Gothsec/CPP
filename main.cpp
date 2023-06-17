#include <iostream>
#include <vector>
#include <stdlib.h>
#include "Cargo.h"
#include "Package.h"
using namespace std;

//prototipos


void menu() {
    int opc;
    cout<<"===== Menu ====="<<endl;
    cout<<"1. Adicionar - constructor por defecto"<<endl; //No tiene sentido ya que se inicializan en el constructor como tal
    cout<<"2. Adicionar - constructor sobrecargado 1"<<endl;
    cout<<"3. Adicionar - constructor sobrecargado 2"<<endl;
    cout<<"4. Adicionar - constructor sobrecargado 3" << endl;
    cout<<"5. Adicionar - constructor con argumentos predeterminados" << endl;
    cout<<"6. Listar" << endl;
    cout<<"7. Acerca de..." << endl;
    cout<<"8. Salir" << endl;
    cout<<"Ingrese una opcion: ";
    cin>>opc;

    switch(opc){
        case 1:
    }
}

int main() {
    
    cout<<endl;
    system("pause");
    return 0;
}
