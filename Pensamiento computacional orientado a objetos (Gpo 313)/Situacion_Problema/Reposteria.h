#include <iostream> 
#include <cstdlib>
using namespace std;

class Reposteria{
private:
    /* data */
    string Direccion,Nombre;
    int Celular;
public:
    void setCliente(string direccion){
        Direccion = direccion;
    }
    string getCliente(){
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
