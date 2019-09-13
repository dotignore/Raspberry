// Одъявление класса Cat
// Переменные-члены объявляются закрытыми, а открытые методы доступа
// обеспечивают инициализацию переменных-членов и возвращение их значений

class cCat{
public:
    // открытые методы доступа
    unsigned int GetAge();
    void SetAge(unsigned int Age);
    
    unsigned int GetWeight();
    void SetWeight(unsigned int Weigth);
    
    void Meow();
    
    // закрытые переменные члены
private:
    unsigned int itsAge;
    unsigned int itsWeight;
};