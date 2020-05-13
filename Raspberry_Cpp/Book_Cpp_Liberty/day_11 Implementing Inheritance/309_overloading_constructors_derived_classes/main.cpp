// Листинг 11,4 Пегрузка конструткоров в производных классах
#include<iostream>
using namespace std;
enum BREED { GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB};

class Mammal{
public:
    // Конструкторы
    Mammal();
    Mammal(int age);
    ~Mammal();
    
    // методы доступа
    int GetAge() const{return itsAge;}
    void SetAge(int age){itsAge=age;}
    int GetWeight()const{return itsWeight;}
    void SetWeight(int weight){itsWeight=weight;}
    
    // Другие методы
    void Speak()const{cout << "Mammal sound!\n";}
    void Sleep()const{cout << "shh. I'm sleeping.\n";}
protected:
    int itsAge;
    int itsWeight;
};

class Dog: public Mammal{
public:
    Dog();
    Dog(int age);
    Dog(int age, int weight);
    Dog(int age, BREED breed);
    Dog(int age, int weight, BREED breed);
    ~Dog();
    
    // Методы доступа
    BREED GetBreed() const {return itsBreed;}
    void SetBreed(BREED breed) {itsBreed = breed;}
    
    // другие методы
    void WagTail()const{cout << "Taeil wagging...\n";}
    void BegForFood()const{cout << "Begging for food...\n";}
private:
    BREED itsBreed;
};

Mammal::Mammal():
itsAge(1),
itsWeight(5){
    cout << "Mammal coonstructor...\n";
}

Mammal::Mammal(int age):
itsAge(age),
itsWeight(5){
    cout << "Mammal(int) coonstructor...\n";
}

Mammal::~Mammal(){
    cout << "Mammal destructor...\n";
}

Dog::Dog():Mammal(),
itsBreed(GOLDEN){
    cout << "Dog constructor...\n";
}

Dog::Dog(int age):Mammal(age),
itsBreed(GOLDEN){
    cout << "Dog constructor...\n";
}

Dog::Dog(int age, int weight):Mammal(age),
itsBreed(GOLDEN){
    itsWeight = weight;
    cout << "Dog(int, int) constructor...\n";
}

Dog::Dog(int age, int weight, BREED breed):Mammal(age),
itsBreed(breed){
    itsWeight = weight;
    cout << "Dog(int, int, BREED) constructor...\n";
}

Dog::Dog(int age, BREED breed):Mammal(age),
itsBreed(breed){
    cout << "Dog(int, BREED) constructor...\n";
}

Dog::~Dog(){
    cout << "Dog destructor...\n";
}

int main(){
    Dog fido;
    Dog rover(5);
    Dog buster(6,8);
    Dog yourkie(3,GOLDEN);
    Dog dobbie(4,20,DOBERMAN);
    
    fido.Speak();
    rover.WagTail();
    
    cout << "Yourie is " << yourkie.GetAge() << " years old\n";
    cout << "Dobbie weighs ";
    cout << dobbie.GetWeight() << " pounds\n";
    
    return 0;
}