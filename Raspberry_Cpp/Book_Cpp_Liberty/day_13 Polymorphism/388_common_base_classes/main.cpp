// Листинг 13,5 Общий базовый класс
#include<iostream>
using namespace std;

typedef int HANDS;
enum COLOR { Red, Green, Blue, Yellow, White, Black, Brown } ;

class Animal{               // Общий базовый класс для классов horse и bird
public:
    Animal(int);
    virtual ~Animal(){cout  << "Animal destructor...\n";}
    virtual int GetAge()const{return itsAge;}
    virtual void SetAge(int age){itsAge = age;}
private:
    int itsAge;
};

Animal::Animal(int age):itsAge(age){
    cout << "Animal constructor...\n";
}


class Horse: public Animal{
public:
    Horse(COLOR color, HANDS height, int age);
    virtual ~Horse() {cout << "Horse destructor...\n";}
    virtual void Whinny()const{cout << "Whinny!...";}
    virtual HANDS GetHeight()const{return itsHeight;}
    virtual COLOR GetColor()const{return itsColor;}
protected:
    HANDS itsHeight;
    COLOR itsColor;
};

Horse::Horse(COLOR color, HANDS height, int age): Animal(age), itsColor(), itsHeight(height){
    cout << "Horse conctructor...\n";
}


class Bird: public Animal{
public:
    Bird(COLOR color, bool migrates, int age);
    virtual ~Bird(){cout << "Bird destructor...\n";}
    virtual void Chirp()const{cout << "Chirp...";}
    virtual void Fly()const{cout << "I can fly! I can fly! I can fly!";}
    virtual COLOR GetColor()const{return itsColor;}
    virtual bool GetMigration()const{return itsMigration;}
protected:
    COLOR itsColor;
    bool itsMigration;
};

Bird::Bird(COLOR color, bool migrates, int age): Animal(age), itsColor(color), itsMigration(migrates){
    cout << "Bird constructor...\n";
}


class Pegasus : public Horse, public Bird{
public:
    void Chirp()const{Whinny();}
    Pegasus(COLOR, HANDS, bool, long, int);
    virtual ~Pegasus() {cout << "Pegasus destructor...\n";}
    virtual long GetNumberBelievers() const{return itsNumberBelievers;}
    virtual COLOR GetColor()const{return Horse::itsColor;}
    virtual int GetAge() const {return Horse::GetAge();}
private:
    long itsNumberBelievers;
};

Pegasus::Pegasus(COLOR aColor, HANDS height, bool migrates, long NumBelieve, int age):
Horse(aColor, height, age), Bird(aColor, migrates, age), itsNumberBelievers(NumBelieve){
    cout << "Pegasus constructor...\n";
}

int main(){
    Pegasus * pPeg = new Pegasus(Red, 5, true, 10, 2);
    int age = pPeg -> GetAge();
    cout << "\nThis pegasus is " << age << " years old.\n\n";
    delete pPeg;
    
    return 0;
}
