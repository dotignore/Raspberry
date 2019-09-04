#include<iostream>
using namespace std;

class cCat{
public:
    void SetAge(int age);
    int GetAge();
    void Meow();
private:
    int itsAge;
};

void cCat::SetAge(int age){
    itsAge = age;
}

int cCat::GetAge(){
    return itsAge;
}

void cCat::Meow(){
    cout << "Царап царап мебель " << endl;
}

int main(){
    cCat Frisky;
    Frisky.SetAge(5);
    
    Frisky.Meow();
    cout << "Игривый КОТЭ царамает мебель ";
    cout << Frisky.GetAge() << " лет" << endl;
    Frisky.Meow();
    
    return 0;
}




/*
// Пример определения
// в объявлении класса
#include<iostream>
using namespace std;
class cCat{                 // начало объявления класса
public:                     // начало раздела public
    int GetAge();           // метод доступа (открытый метод кторый предоставляет доступ к закрытому переменному члену itsAge)
    void SetAge(int age);   // метод доступа (открытая функция доступа которая принимает в качестве аргумена целочисленное значение и присваивает переменной  itsAge значение этого аргумента)
    void Meow();            // общяя функция (этот метод не является функцией доступа к данным-членам класса а используется для вывода на экран слова Meow)
private:                    // начало раздела pravat
    int itsAge;             // Изменяемая величина
};
//GetAge, открытая функция доступа,
// возвращяет значение перемнной-члена itsAge
int cCat::GetAge(){         // (Этот метод не принимает никаких параметров и возвращяет целое значение, это имя функции ::GetAge)
    // (Эта фунция GetAge() возвращяет значение переменного-члена itsAge) (при этом из функции main() можно обратится к открытому методу GetAge(). А поскольку метод GetAge() является функцией-членом класса cCat то он имеет все права доступа к открытому методу GetAge() возвращяет значение  переменной itsAge  в вункцию main())
    return itsAge;
}
// Определение открытой функции доступа SetAge
// Функция SetAge
// иницирует переменную-член itsAge
void cCat::SetAge(int age){ // (SetAge принимает целочисленный параметр и присваивает переменной itsAge значение  этого параметра) (являясь членом класса cCAt функция SetAge имеет прямой доступ к переменному-члену itaAge)
    // устанавливаем переменную-член itsAge равной
    // значению, переданному с помощью параметра age
    itsAge = age;
}
// Определение метода Meow
// возвращяет void
// параметров нет
// используется для вывода на экран текста "Meow"
void cCat::Meow(){ // тут вроди как всё понятно
    cout << "Meow.\n";
}
// Создаём виртуальную кошку, устанавливаем ее возраст, разрешаем
// ей гулять, сообщяем ей возраст, затем снова "мяукаем".
int main(){
    cCat Frisky;
    Frisky.SetAge(5);
    Frisky.Meow();
    cout << "Frisky is a cat whoo is ";
    cout << Frisky.GetAge() << " years old\n";
    Frisky.Meow();
    return 0;
}
*/