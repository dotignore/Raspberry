// Листинг 13,9 Выполнение чистых виртуальных функций
#include<iostream>
using namespace std;

class Shape{
public:
    Shape(){}
    virtual ~Shape(){}
    virtual long GetArea() = 0;
    virtual long GetPerim() = 0;
    virtual void Draw() = 0;
private:
};

void Shape::Draw(){
    cout << "Abstract drawing mechanism!\n";
}

class Circle : public Shape{
public:
    Circle(int radius):itsRadius(radius){}
    virtual ~Circle(){}
    long GetArea() {return 3 * itsRadius * itsRadius;}
    long GetPerim(){return 9 * itsRadius;}
    void Draw();
private:
    int itsRadius;
    int itsCircumference;
};

void Circle::Draw(){
    cout << "Circle drawing routine here!\n";
    Shape::Draw();
}

class Rectangle : public Shape{
public:
    Rectangle(int len, int width):itsLenght(len), itsWidth(width){}
    virtual ~Rectangle(){}
    long GetArea(){return itsLenght * itsWidth;}
    long GetPerim(){return 2 * itsLenght + 2 * itsWidth;}
    virtual int GetLenght(){return itsLenght;}
    virtual int GetWidth(){return itsWidth;}
    void Draw();
private:
    int itsWidth;
    int itsLenght;
};

void Rectangle::Draw(){
    for (int i = 0; i<itsLenght; i++){
        for(int j = 0; j<itsWidth; j++)
            cout << "x ";
        
        cout << "\n";
    }
    Shape::Draw();
}

class Square : public Rectangle{
public:
    Square(int len);
    Square(int len, int width);
    virtual ~Square(){}
    long GetPerim(){return 4 * GetLenght();}
};

Square::Square(int len):Rectangle(len,len){}

Square::Square(int len, int width):Rectangle(len,width){
    if(GetLenght() != GetWidth())
        cout << "Error, not a square... a Rectangle??\n";
}

int main(){
    int choice;
    bool fQuit = false;
    Shape * sp;
    
    while(1){
        cout << "(1)Circle (2)Rectangle (3)Square (0)Quit: ";
        cin >> choice;
        
        switch(choice){
            case 1: sp = new Circle(5);
                break;
            case 2: sp = new Rectangle(4,6);
                break;
            case 3: sp = new Square (5);
                break;
            default: fQuit = true;
                break;
        }
        if (fQuit)
            break;
        
        sp->Draw();
        delete sp;
        cout << "\n";
    }
    
    return 0;
}