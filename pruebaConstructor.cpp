#include<iostream>
using namespace std;
/* ---------------------------------ARCHIVO DE REPASO DE POO EN C++, CON CONSTRUCTORES------------------------------
objeto: coleccion de caracteristicas y acciones. 
acciones: funciones que el objeto puede realizar, se definen dentro de la clase.
clase: plantilla que define un objeto, contiene las caracteristicas y acciones del objeto.
caracteristicas: son ateributos del objeto  

Constructor: Es un metodo especial dentro de una clase que se llama automaticamente cuando se instancia un objeto de esa clase.
*/

class Humano {
    /*cuando declaramos un atributo en "public" quiere decir que cualquier persona desde fuera de las llaves de la clase.
    Pero si la colocamos como privada nadie podra acceder desde afuera. En proyectos grandes, dejamos todos los atributos en privado y dejamos solo el constructor en pubico, de forma que podremos operar y crear objetos pero no acceder a sus datos (pensa en un login convencional, vos ingresas tus datos y accedes a la web, pero esos datos privados que creaste como la contraseña por ejemplo no pueden ser accedidos por nadie en el programa, si fuesen publicos quedarian a merced de cualquiera que pueda acceder a la web)*/

    //private:
    public:
      string nombre = " ";
      int dni;
      char genero;
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

      //public: 
      
      //Constructor de clase humano con el mismo nombre que la clase y recibiendo parametros con el mismo nombre.
      Humano(string nombre, int dni, char genero, int edad) {
        /*Creamos este constructor con el mismo nombre que la clase y le pasamos como argumento exactamente la cantidad de atributos que tenemos que llenar al crear un objeto. Para colocar losargumentos que pasamos e igualarlos a los atributos, colocamos la palabra reservada "this" SOLO porque le paso el mismo nombre de variable al constructor, para que no se generen confusiones.
        Este nombre (el atributo de la clase) es igual a lo que nos paso el objeto que instanció este constructor. */
        this->nombre = nombre;
        this->dni = dni;
        this->genero = genero;
        this->edad = edad;
        
        /*
        Si le paso como argumento x,y,z, me ahorro el "this" y hago lo siguiente:
        nombre = x;
        clase = y;
        edad = z;
        */
      }

};

int main(){

    cout << "Hello, World!" << endl;

    //Ahora que tengo mi constructor, le paso los parametros al crear el objeto de esta manera, es como una funcion modular
    Humano persona1("juan", 47028060,'M', 19); //creamos un objeto de la clase humano
    Humano persona2("anahi", 47028060, 'F', 20); //creamos otro objeto de la clase humano
    /*de esta manera con cout y cin el usuario ingresa los valores, pero tambien puedo definirlos  asi:
    persona1.nombre = "thiago sos puto si estas leyendo esto"; 
    */
    
    cout << "Nombre: " << persona1.nombre << endl;
    cout << "Documento nacional de identidad: " << persona1.dni << endl;
    cout << "Edad: " << persona1.edad << endl;
    cout << "Nombre: " << persona2.nombre << endl;
    cout << "Documento nacional de identidad: " << persona2.dni << endl;
    cout << "Edad: " << persona2.edad << endl;

    persona1.comer(); //llamamos a la funcion comer del objeto persona1
    persona1.tomar(); //llamamos a la funcion tomar del objeto persona1
    persona1.dormir(); //llamamos a la funcion dormir del objeto persona1    


    return 0;
}