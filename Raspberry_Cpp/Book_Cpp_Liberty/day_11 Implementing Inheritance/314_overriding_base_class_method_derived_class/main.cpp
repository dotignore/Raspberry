// Листинг 11,5 Замещение метода базового класса в производном классе
#include<iostream>
using namespace std;
enum BREED { GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB};

class Mammal{
public:
    // Конструкторы
    Mammal(){cout << "Mammal counstructor...\n";}
    ~Mammal(){cout << "Mammal destructor...\n";}
    // другие методы
    void Speak()const{cout << "Mammal sound!\n";}
    void Sleep()const{cout << "shhh. I'm sleeping\n";}
protected:
    int itsAge;
    int itsWeight;
};

class Dog : public Mammal{
public:
    // конструкторы
    Dog(){cout << "Dog constructor...\n\n";}
    ~Dog(){cout << "\nDog destructor...\n";}
    // другие методы
    void WagTail()const{cout << "Tail wagging...\n";}
    void BegForFood()const{cout << "Begging for food...\n";}
    void Speak()const{cout << "Woof!...\n";}
private:
    BREED itsBreed;
};

int main(){
    Mammal bigAnimal;
    Dog fido;
    
    bigAnimal.Speak();
    fido.Speak();
}