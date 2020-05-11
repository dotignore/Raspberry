// Листинг 11,2 Использование унаследованых объектов
#include<iostream>
using namespace std;
enum BREED{GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB};
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
class Mammal{
public:
    // конструкторы
    Mammal():itsAge(2){}
    ~Mammal(){}
    
    // методы доступа
    int GetAge()const{return itsAge;}       // 2 ->
    void SetAge(int age){itsAge = age;}     // itsAge = age (itsAge <- 2)
    
    // Другие методы
    void Speak() const{cout << "Mammal sound!\n";}
    
protected:
    int itsAge;
};
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
class Dog : public Mammal{
public:
    // Конструкторы
    Dog():itsBreed(GOLDEN){}
    ~Dog(){}
    
    // Методы доступа
    BREED GetBreed() const{return itsBreed;}
    void SetBreed(BREED breed){itsBreed = breed;}
    
    // другие методы
    void WagTail() const {cout << "Tail wagging...\n";}
    
protected:
    BREED itsBreed;
};
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
int main(){
    Dog fido;
    
    fido.Speak();                                           // --> Mammal sound!
    fido.WagTail();                                         // --> Tail wagging...
    cout << "Fido is " << fido.GetAge() << " year old\n";   // --> Fido is 2 year old
    
    return 0;
}

/*

// Листинг 11,2 Использование унаследованых объектов
#include<iostream>
using namespace std;
enum BREED{GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB};

class Mammal{
public:
    // конструкторы
    Mammal():itsAge(2), itsWeight(5){}
    ~Mammal(){}
    
    // методы доступа
    int GetAge() const{return itsAge;}
    void SetAge(int age){itsAge = age;}
    int GetWeight() const {return itsWeight;}
    void SetWeight(int weight){itsWeight = weight;}
    
    // Другие методы
    void Speak() const{cout << "Mammal sound!\n";}
    void Sleep() const{cout << "shhh. I'm sleeping.\n";}
    
protected:
    int itsAge;
    int itsWeight;
};

class Dog : public Mammal{
public:
    // Конструкторы
    Dog():itsBreed(GOLDEN){}
    ~Dog(){}
    
    // Методы доступа
    BREED GetBreed() const{return itsBreed;}
    void SetBreed(BREED breed){itsBreed = breed;}
    
    // другие методы
    void WagTail() const {cout << "Tail wagging...\n";}
    void BegForFood() const {cout << "Begging for food...\n";}
    
protected:
    BREED itsBreed;
};

int main(){
    Dog fido;
    
    fido.Speak();                           // Mammal sound!
    fido.WagTail();                         // Tail wagging...
    cout << "Fido is " << fido.GetAge() << " year old\n";      // 2
    
    return 0;
}

*/