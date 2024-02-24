#include <iostream> 
#include <cstdlib>
#include <time.h>
#include <math.h>
using namespace std; 

void problema_5() {
    srand(time(0));
        int random_number = rand()%100;
        int guess = -1;
        int intentos = 0;
        // cout<<random_number<<endl;
        while (guess != random_number){
            intentos ++;
            cout<<"Adivina un numero: ";
            cin>>guess;
            if (guess < random_number){
                cout<<"MAS"<<endl;
            }
            else if (guess > random_number){
                cout<<"MENOS"<<endl;
            }
            else if (guess == random_number){
                cout<<"Acerctaste con el valor magico "<<random_number<<" despues de "<<intentos<<" intentos"<<endl;
            }
        }
}


void problema_6(){
    float celcius,h, Fahrenheit;
    int n;
    cout<<"Valor inicial en Celcius: ";
    cin>>celcius;
    cout<<"Numero de conversiones que se haran: ";
    cin>>n;
    cout<<"Incremento entre los valores Celsius";
    cin>>h;
    cout<<"FAHRENHEIT          CELCIUS"<<endl;
    for (int i =1; i <= n; i++){
        Fahrenheit = (celcius * 9/5) + 32;
        cout<<Fahrenheit<<"°F                "<<celcius<<"°C"<<endl;
        celcius = celcius + h;
        
    }
    

}

void problema_7(int a, int d, int n){
    int resultado = 0;
    for (int i = 1; i <= n; i++){
        resultado = resultado + (a + ((i-1)*d));
        cout<<"Termino "<<i<<": "<<resultado<<endl;
    }
    cout<<"Valor Total de la Serie: "<<resultado<<endl;
}

void problema_8(){
    int n = 0;
    double xn_de_MGA = 0,xn_de_MA = 0;
    float media_g_armonica,media_armonica, num = 999,val=1;
    while (num!= 0){
        cout<<"Dame un Numero de la serie: ";
        cin>>num;
        if (num == 0){
            break;
        }
        xn_de_MGA = xn_de_MGA + (num*val);
        xn_de_MA = xn_de_MA + (1/num);
        n++;
        media_g_armonica = pow(xn_de_MGA,(1/n));
        media_armonica = n/xn_de_MA;
        val = num;
    }
    cout<<"Media Geometrica Armonica: "<<media_g_armonica<<endl;
    cout<<"Media Armonica: "<<media_armonica<<endl;
}



int main(){ 
    // problema_5();
    problema_6();
    // problema_7(1,3,25);
    // problema_8();
    return 0;
}