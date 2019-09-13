// Листинг 11,1 простое наследование
#include<iostream>
using namespace std;
enum BREED{GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB};

class Mammal{
public:
    // конструкторы
    Mammal();
    ~Mammal();
    
    // методы доступа к данным
    int GetAge() const;
    void SetAge(int);
    int GetWeight() const;
    void SetWeight();
    
    // Другие методы
    void Speak() const;
    void Sleep() const;
    
protected:
    int itsAge;
    int itsWeight;
};

class Dog : public Mammal{
public:
    // Конструкторы
    Dog();
    ~Dog();
    
    // Методы доступа к классам
    BREED GetBreed() const;
    void SetBreed(BREED);
    
    // другие методы
    WagTail();
    BegForFood();
    
protected:
    BREED itsBreed;
};

int main(){
    
    return 0;
}