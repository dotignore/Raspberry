// Листинг 11,3 Вызов конструктора и деструктора
#include<iostream>
using namespace std;
enum BREED{GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB};

class Mammal{
public:
    // конструкторы
    Mammal();
    ~Mammal();
    
    // методы доступа
    int GetAge() const{return itsAge;}
    void SetAge(int age){itsAge = age;}
    int GetWeight() const{return itsWeight;}
    void SetWeight(int weight){ itsWeight = weight;}
    
    // другие методы
    void Speak() const {cout << "Mammal sount!\n";}
    void Sleep() const {cout << "shhh. I'm sleepeng.\n";}
protected:
    int itsAge;
    int itsWeight;
};

class Dog : public Mammal{
public:
    // конструкторы
    Dog();
    ~Dog();
    
    // методы доступа
    BREED GetBreed() const{return itsBreed;}
    void SetBreed(BREED breed){itsBreed = breed;}
    
    // другие методы
    void WagTail() const{cout << "Tail wagging...\n";}
    void BegForFoob() const{cout << "Begging for food...\n";}
protected:
    BREED itsBreed;
};

Mammal::Mammal():
itsAge(1),
itsWeight(5){
    cout << "Mammal constructor...\n";
}
Mammal::~Mammal(){
    cout << "Mammal destructor...\n";
}
Dog::Dog():itsBreed(GOLDEN){
    cout << "Dog constructor...\n";
}
Dog::~Dog(){
    cout << "Dog destructor...\n";
}

int main(){
    Dog fido;
    
    fido.Speak();
    fido.WagTail();
    cout << "Fido is " << fido.GetAge() << " years old\n";
    
    return 0;
}