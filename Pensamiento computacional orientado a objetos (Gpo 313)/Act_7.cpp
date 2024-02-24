#include <iostream> 
#include <cstdlib>
#include <math.h>
using namespace std; 

class Fraccion{
private:
    int Den = 2, Num = 1;
public:
    void setDen(int den){
        Den = den;
    }
    int getDen(){
        return Den;
    }

    void setNum(int num){
        Num = num;
    }
    int getDen(){
        return Num;
    }
    void calcValorReal(){
        //^^^^^^^^^^^^^
    }
    void imprimeFraccion(){
        cout<<Num<<endl<<"___"<<endl<<Den<<endl;
    }
    double sumaFracciones(){
        //^^^^^^^^^^^^^
    }
};


int main(){

    return 0;

}