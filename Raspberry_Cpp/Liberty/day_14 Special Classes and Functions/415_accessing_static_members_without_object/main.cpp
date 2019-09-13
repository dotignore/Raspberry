// Листинг 14.2 Статические переменные-члены
#include<iostream>
using namespace std;

class Cat{
public:
    Cat(int age):itsAge(age){HowManyCats++;}
    virtual ~Cat(){HowManyCats--;}
    //virtual int GetAge(){return itsAge;}
    //virtual void SetAge(int age){itsAge = age;}
    static int HowManyCats;
private:
    int itsAge;
};

int Cat::HowManyCats = 0;

void TelepathicFunction();

int main(){
    int i;
    const int MaxCats = 5;
    Cat * CatHouse[MaxCats];
    
    for(i=0; i<MaxCats; i++){
        CatHouse[i] = new Cat(i);
        TelepathicFunction();
    }
    
    for(i=0; i < MaxCats; i++){
        delete CatHouse[i];
        TelepathicFunction();
    }
    
    return 0;
}

void TelepathicFunction(){
    cout << "There are " << Cat::HowManyCats << " cats alive!\n";
}
