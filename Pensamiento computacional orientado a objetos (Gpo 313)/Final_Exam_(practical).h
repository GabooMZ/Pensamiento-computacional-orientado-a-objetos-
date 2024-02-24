// Airline_Class.h
#include <iostream> 
using namespace std;
namespace N
{
    class Airline{ 
private:
    string BoardingCity, ShortName, Incomes;
    float flights[];
public:
    
    void setBoardingCity(string boardingCity){
        BoardingCity = boardingCity;
    }
    void setShortName(string shortName){
        ShortName = shortName;
    }
    void setIncomes(string incomes){
        Incomes = incomes;
    }
    string getBoardingCity(){
        return BoardingCity;
    }
    string getShortName(){
        return ShortName;
    }
    string getIncomes(){
        return Incomes;
    }
    void updateAirline(){
    }
    void scheduleFlight(){
    }
    void currentIncome(){
    }
    void closeOperation(){
    }
};

class Passenger{
private:
    string Name, Phone;
public:
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void setPhone(string phone){
        Phone = phone;
    }
    string getPhone(){
        return Phone;
    }
};
} // namespace N


