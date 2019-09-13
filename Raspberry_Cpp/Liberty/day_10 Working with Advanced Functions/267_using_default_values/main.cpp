// Листинг 10,2 Использование значений заданных по умолчанию
#include<iostream>
using namespace std;

// Объявление класса Rectangle
class Rectangle{
public:
    // конструкторы
    Rectangle(int width, int height);
    ~Rectangle(){}
    
    void DrawShape(int aWidth, int aHeight, bool UseCurrentVals = false) const;
private:
    int itsWidth;
    int itsHeight;
};

// Пример конструктора
Rectangle::Rectangle(int width, int height):
itsWidth(width),                    // инициализация
itsHeight(height)
{}                                  // пустое поле

// для третьего параметра используются значению по умолчанию
void Rectangle::DrawShape(int width, int height, bool UseCurrentValue)const
{
    int printWidth;
    int printHeight;
    
    if(UseCurrentValue == true){
        printWidth = itsWidth;      // используются значения текущего класса
        printHeight = itsHeight;
    }
    else{
        printWidth = width;         // используются значения параметра
        printHeight = height;
    }
    
    for(int i=0; i<printHeight; i++){
        for(int j=0; j<printWidth; j++){
            cout << "*";
        }
        cout << "\n";
    }
}
// Выполняемая программа показывает использование перегруженных функций
int main(){
    // создание прямоугольника 30 на 5
    Rectangle theRect(30,5);
    cout << "DrawShape(0,0,true)..." << endl;
    theRect.DrawShape(0,0,true);
    cout << "DrawShape(40,2)..." << endl;
    theRect.DrawShape(40,2);
    
    return 0;
}