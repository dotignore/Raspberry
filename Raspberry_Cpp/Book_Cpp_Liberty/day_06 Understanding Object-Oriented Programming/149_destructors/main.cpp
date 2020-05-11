// Пример одъявления конструктора и
// деструктора в классе Cat
#include<iostream>
using namespace std;

class cCat{                     // начало объявления класса
public:                         // начало открытого раздела
    cCat(int initialAge);       // конструктор
    ~cCat();                    // деструктор
    void SetAge (int age);      // метод доступа
    int GetAge();               // метод доступа
    void Meow();
private:                        // начало закрытого раздела
    int itsAge;                 // переменная член
};

// конструктор класса
cCat::cCat(int initialAge){
    itsAge = initialAge;
}
cCat::~cCat(){                  // деструктор, не выполняющий действий
}

// Операция SetAge, открытой функции обеспечения доступа

void cCat::SetAge(int age){
    // устанавливаем переменную-член itsAge завной
    // значению, переданому параметром age
    itsAge = age;
}

// GetAge, открытая функция обеспечения доступа.
// возвращает значение  перемнной члена itsAge
int cCat::GetAge(){
    return itsAge;
}

// Определение метода Meow возвращает void параметров нет
// используется для вывода на экран текста "Meow"
void cCat::Meow(){
    cout << "Meow\n";
}

// Создаём виртуальную кошку, и устанавливаем ее возраст, разрешаем ей мяукнуть,
// сообщяем ее возраст, затем снова "мяукнуть" и изменяем возраст кошки
int main(){
    cCat Frisky(5);
    Frisky.Meow();                           // Meow
    cout << "Frisky is a cat who is ";
    cout << Frisky.GetAge() << " year old\n"; // Frisky is a cat who is 5 year old
    Frisky.Meow();                           // Meow
    
    Frisky.SetAge(7);
    cout << "Now Frisky is ";
    cout << Frisky.GetAge() << " years old\n";  //Now Frisky is 7 years old
    
    return 0;
}