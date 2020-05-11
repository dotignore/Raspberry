#include<iostream>
using std::cout;
using std::endl;

class cCat{
public:
    cCat(int initialAge);
    ~cCat();
    
    void SetAge (int age) {itsAge=age;}
    int GetAge() const{return itsAge;}
   
    void Meow() const{cout << "Мяу Мяу..." << endl;}

private:
    int itsAge;
};


/*
 #include <iostream>
 
 class Cat{
 public:
 Cat (int initialAge);
 ~Cat();
 int GetAge() const { return itsAge;}
 void SetAge (int age) { itsAge = age;}
 void Meow() const { std::cout << "Meow.\n";} // inline!
 private:
 int itsAge;
 };
 */