// Листинг 10.1 Перезагрузка функций членов
#include<iostream>
using namespace std;

// Объявление класса Rectangle
class Rectangle{
public:
    // конструкторы
    Rectangle(int width, int height);
    ~Rectangle(){}
    
    // перезагрузка функции-члена класса DrawShape
    void DrawShape() const;
    void DrawShape(int aWidth, int aHeight) const;
private:
    int itsWidth;
    int itsHeight;
};

// Приминение конструктора
Rectangle::Rectangle(int width, int height){
    itsWidth = width;
    itsHeight = height;
}

// Перегруженная функция DrawShape - вариант без передачи данных
// Создание прямоугольника по значениям, заданным по умолчанию
void Rectangle::DrawShape() const{
    DrawShape(itsWidth, itsHeight);
}

// Перегружаемая функция DrawShape - передачя двух значений
// Создание прямоугольника по значениямб переданным с параметрами
void Rectangle::DrawShape(int width, int height) const{
    for(int i=0; i<height; i++){
        for(int j=0; j<width; j++){
            cout << "*";
        }
        cout << "\n";
    }
}

// Выполняемая программа, демонстрирующяя использование перегружаемых функций
int main(){
    // создание прямоугольника с размерами 30 и 5
    Rectangle theRect(30,5);
    cout << "DrawShape(): \n";
    theRect.DrawShape();
    cout << "\nDrawShape(40,2): \n";
    theRect.DrawShape(40,2);
    
    return 0;
}