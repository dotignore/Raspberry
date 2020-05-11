// Листинг 10.3
// Перегрузка конструктора
#include<iostream>
using namespace std;

class Rectangle{
public:
    Rectangle();
    Rectangle(int width,int height);
    ~Rectangle(){}
    int GetWidth() const {return itsWidth;}
    int GetLength() const {return itsLenght;}
private:
    int itsWidth;
    int itsLenght;
};

Rectangle::Rectangle(){
    itsWidth = 5;
    itsLenght = 10;
}

Rectangle::Rectangle(int width, int length){
    itsWidth = width;
    itsLenght = length;
}

int main(){
    Rectangle Rect1;
    cout << "Rect1 width: " << Rect1.GetWidth() << endl;
    cout << "Rect1 length: " << Rect1.GetLength() << endl;
    
    int aWidth, aLength;
    cout << "Enter a width: ";
    cin >> aWidth;
    cout << "\nEnter a lenght: ";
    cin >> aLength;
    Rectangle Rect2(aWidth, aLength);
    cout << "\nRect2 width: " << Rect2.GetWidth() << endl;
    cout << "Rect2 length: " << Rect2.GetLength() << endl;
    
    return 0;
}