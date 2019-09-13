// Листинг 8.6
// Доступ к данным объекта в области динамического обмена
#include<iostream>
using namespace std;

class SimpleCat{
public:
    SimpleCat(){
        itsAge = 2;
    }
    ~SimpleCat(){
        cout << endl << "Destructor " << endl;
    }
    int GetAge() const{
        return itsAge;
    }
    void SetAge(int age){
        itsAge=age;
    }
private:
    int itsAge;
};

int main(){
    SimpleCat * Frisky = new SimpleCat;
    cout << "Frisky " << Frisky -> GetAge() << " year old\n";
    Frisky -> SetAge(5);
    cout << "Frisky " << Frisky -> GetAge() << " year old\n";
    delete Frisky;
    
    return 0;
}