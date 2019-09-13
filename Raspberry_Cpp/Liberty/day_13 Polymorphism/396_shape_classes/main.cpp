// Листинг 13,7 Кассы семейства Shape
#include<iostream>
using namespace std;

class Shape{
public:
    Shape(){}
    virtual ~Shape(){}
    virtual long GetArea(){return -1;}
    virtual long GetPerim(){return -1;}
    virtual void Draw(){}
private:
};

class Circle : public Shape{
public:
    Circle(int radius):itsRadius(radius){}
    ~Circle(){};
    long GetArea(){return 3 * itsRadius * itsRadius;}
    long GetPerim(){return 6 * itsRadius;}
    void Draw();
private:
    int itsRadius;
    int itsCircumference;
};

void Circle::Draw(){
    cout << "Circle drawing ruotine here!\n";
}

class Rectangle:public Shape{
public:
    Rectangle(int len, int width):
    itsLength(len), itsWidth(width){}
    virtual ~Rectangle(){}
    virtual long GetArea(){return itsLength * itsWidth;}
    virtual long GetPremium(){return 2 * itsLength + 2 * itsWidth;}
    virtual int GetLength(){return itsLength;}
    virtual int GetWidth(){return itsWidth;}
    virtual void Draw();
private:
    int itsWidth;
    int itsLength;
};

void Rectangle::Draw(){
    for(int i =0; i<itsLength; i++){
        for (int j=0; j<itsWidth; j++)
            cout << "x ";
        
        cout << "\n";
    }
}

class Square : public Rectangle{
public:
    Square(int len);
    Square(int len, int width);
    ~Square(){}
    long GetPerim(){return 4 * GetLength();}
};

Square::Square(int len):
Rectangle(len,len){
}

Square::Square(int len, int width):
Rectangle(len,width){
    if(GetLength() !=GetWidth())
        cout << "Error, not a square... a Rectangle??\n";
}

int main(){
    int choice;
    bool fQuit = false;
    Shape * sp;
    // Shape * sp = new Circle(5);
    // Circle * sp = new Circle(5);
    
    while ( !fQuit ) {
        cout << "(1)Circle (2)Rectangle (3)Square (0)Quit: ";
        cin >> choice;
        switch (choice) {
            case 0: fQuit = true;
                break;
            case 1: sp = new Circle(5);
                break;
            case 2: sp = new Rectangle(4,6);
                break;
            case 3: sp = new Square(5);
                break;
            default:
                cout << "Please enter a number between 0 and 3" << endl;
                continue;
                break;
        }
        if( !fQuit )
            sp->Draw();
        delete sp;
        sp = 0;
        cout << endl;
    }
    
    return 0;
}