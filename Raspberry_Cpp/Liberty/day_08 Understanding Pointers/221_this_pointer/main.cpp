// Листинг 8,8
// Указатель this
#include<iostream>
using namespace std;

class Rectangle {
public:
    Rectangle();
    ~Rectangle();

    void SetLenght(int lenght) {
        this -> itsLength = lenght;
    }
    int GetLength () const{
        return this -> itsLength;
    }

    void SetWidth(int width) {
        this -> itsWidth = width;
    }
    int GetWidth () const{
        return this -> itsWidth;
    }

private:
    int itsLength;
    int itsWidth;
};

Rectangle::Rectangle(){
    itsWidth = 5;
    itsLength = 10;
}
Rectangle::~Rectangle(){
}

int main(){
    Rectangle theRect;
    cout << "theRect is " << theRect.GetLength() << "meters long.\n";
    cout << "theRect is " << theRect.GetWidth() << "meters wide.\n\n";
    theRect.SetLenght(20);
    theRect.SetWidth(10);
    cout << "theRect is " << theRect.GetLength() << "meters long.\n";
    cout << "theRect is " << theRect.GetWidth() << "meters wide.\n";
    
    return 0;
}