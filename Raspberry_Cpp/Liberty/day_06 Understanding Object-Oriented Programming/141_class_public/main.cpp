// Пример объявления класса
// с открытыми членами
#include<iostream>
using namespace std;

class cCat{ // объявление класса
public:     // следующие члены являются открытыми
    int itsAge;
    int itsWeight;
};

int main(){
    cCat Frisky;
    Frisky.itsAge=5;   // присваиваем значению переменной-члену
    cout << "Frisky is a cat who is ";
    cout << Frisky.itsAge << " year old.\n";
    
    return 0;
}