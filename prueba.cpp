#include<iostream>
using namespace std;
/*objeto: coleccion de caracteristicas y acciones. 
acciones: funciones que el objeto puede realizar, se definen dentro de la clase.
clase: plantilla que define un objeto, contiene las caracteristicas y acciones del objeto.
caracteristicas: son ateributos del objeto  */

class Humano {
    /*cuando declaramos un atributo en "public" quiere decir que cualquier persona desde fuera de las llaves de la clase.
    Pero si la colocamos como privada nadie podra acceder desde afuera*/
    public:
      string nombre = " ";
      string clase = " ";
      int edad;

      void comer(){
        cout << "Esta persona esta comiendo" << endl;
      }

      void tomar(){
        cout << "Esta persona esta tomando" << endl;
      }

        void dormir(){
            cout << "Esta persona esta durmiendo" << endl;
        }
};

class Automoviles {
    public:
      string marca = " ";
      string modelo = " ";
      int anio;

      void acelerar(){
        cout << "El auto esta acelerando" << endl;
      }

      void frenar(){
        cout << "El auto esta frenando" << endl;
      }

        void girar(){
            cout << "El auto esta girando" << endl;
        }
};

int main(){

    cout << "Hello, World!" << endl;

    Humano persona1; //creamos un objeto de la clase humano

    /*de esta manera con cout y cin el usuario ingresa los valores, pero tambien puedo definirlos  asi:
    persona1.nombre = "thiago sos puto si estas leyendo esto"; 
    */
    cout << "Ingrese el nombre del personaje: ";
    cin >> persona1.nombre; //accedemos al atributo nombre del objeto persona1
    cout << "Ingrese la clase del personaje: ";
    cin >> persona1.clase; //accedemos al atributo clase del objeto persona1
    cout << "Ingrese la edad del personaje: ";
    cin >> persona1.edad;
    
    cout << "Nombre: " << persona1.nombre << endl;
    cout << "Clase: " << persona1.clase << endl;
    cout << "Edad: " << persona1.edad << endl;

    persona1.comer(); //llamamos a la funcion comer del objeto persona1
    persona1.tomar(); //llamamos a la funcion tomar del objeto persona1
    persona1.dormir(); //llamamos a la funcion dormir del objeto persona1    


    return 0;
}