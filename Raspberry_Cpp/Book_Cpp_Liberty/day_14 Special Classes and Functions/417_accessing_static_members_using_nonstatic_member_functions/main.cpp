// Листинг 14,3 Закрытые статические переменные
#include<iostream>
using namespace std;

class Cat{
public:
    Cat(int age):itsAge(age){HowManyCats++;}
    virtual ~Cat(){HowManyCats--;}
    
    virtual int GetAge(){return itsAge;}
    virtual void SetAge(int age){itsAge = age;}
    virtual int GetHowMany(){return HowManyCats;}
private:
    int itsAge;
    static int HowManyCats;
};

int Cat::HowManyCats=0;

int main(){
    int i;
    const int MaxCats = 5;
    Cat * CatHouse[MaxCats];
    
    for(i=0; i<MaxCats; i++)
        CatHouse[i] = new Cat(i);
    
    for(i=0; i<MaxCats; i++){
        cout << "There are " << CatHouse[i]->GetHowMany() << " cats left!" << endl;
        
        cout << "Deleting the one which is " << CatHouse[i]->GetAge()+2 << " tears old\n" << endl;
        delete CatHouse[i];
        CatHouse[i] = 0;
    }
    
    return 0;
}