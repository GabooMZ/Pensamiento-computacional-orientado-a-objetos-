#include <iostream> 
#include <cstdlib>
using namespace std;

class cliente{
private:
    /* data */
    string Direccion,Nombre;
    int Celular;
public:
    void setDireccion(string direccion){
        Direccion = direccion;
    }
    string getDireccion(){
        return Direccion;
    }
    void setNombre(string nombre){
        Nombre = nombre;
    }
    string getNombre(){
        return Nombre;
    }
    void setCelular(int numcelular){
        Celular = numcelular;
    }
    int getCelular(){
        return Celular;
    }
};
