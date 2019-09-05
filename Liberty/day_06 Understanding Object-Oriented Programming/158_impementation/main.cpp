// Пример использование подставляемых функций
// и включение файла заголовка
#include"cCat.hpp"

cCat::cCat(int initialAge){    // конструктор
    itsAge = initialAge;
}

cCat::~cCat(){      // деструктор не выполняет никаких действий
}

// создаём виртуальну кошку устанавливаем ее возраст, разрешаем
// ей мяукать ,,сообщяем ее возраст, затем снова мяукаем и изменяем ее возраст

int main(){
    
    cCat Frisky(5);
    Frisky.Meow();
    cout << "кошка любит царапать мебел ей ";
    cout << Frisky.GetAge() << " лет" << endl;
    
    Frisky.SetAge(7);
    Frisky.Meow();
    cout << "кошка любит царапать мебел ей ";
    cout << Frisky.GetAge() << " лет" << endl;
    Frisky.Meow();
    
    return 0;
}