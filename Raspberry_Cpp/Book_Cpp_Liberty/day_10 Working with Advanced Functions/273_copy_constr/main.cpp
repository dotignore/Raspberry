// Листинг 10.5
// Конструктор копировщик
#include<iostream>
using namespace std;

class CAT{
public:
    CAT();              // конструктор по умолчанию
    CAT(const CAT &);   // конструктор копировщик
    ~CAT();           // Деструктор
    int GetAge() const {return *itsAge;}
    int GetWeight() const {return *itsWeight;}
    void SetAge(int age) {*itsAge = age;}
private:
    int *itsAge;
    int *itsWeight;
};

CAT::CAT(){
    itsAge = new int;
    itsWeight = new int;
    *itsAge = 5;
    *itsWeight = 9;
}

CAT::CAT(const CAT & rhs){
    itsAge = new int;
    itsWeight = new int;
    *itsAge = rhs.GetAge();             // открытый метод доступа
    *itsWeight = *(rhs.itsWeight);      // закрытый метод доступа
}

CAT::~CAT(){
    delete itsAge;
    itsAge = 0;
    delete itsWeight;
    itsWeight = 0;
}

int main(){
    CAT frisky;
    cout << "friscky's age: " << frisky.GetAge() << endl;
    cout << "Setting frisky to 6...\n";
    frisky.SetAge(6);
    cout << "Creating boots from rfisky\n\n";
    
    CAT boots(frisky);
    cout << "frisky's age: " << frisky.GetAge() << endl;
    cout << "boots age: " << boots.GetAge() << endl;
    cout << "setting frisky to 7...\n";
    frisky.SetAge(7);
    cout << "frisky's age: " << frisky.GetAge() << endl;
    cout << "boot's age: " << boots.GetAge() << endl;
    
    return 0;
}

