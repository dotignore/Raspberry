// Листинг 8,10
// Вызов константных методов с помощью указателей
#include<iostream>
using namespace std;

class Rectangle{
public:
    Rectangle();
    ~Rectangle();
    
    void SetLength(int length){
        itsLength = length;
    }
    int GetLength() const{
        return itsLength;
    }
    void SetWidth(int width){
        itsWidth = width;
    }
    int GetWidth() const{
        return itsWidth;
    }
    
private:
    int itsLength;
    int itsWidth;
};

Rectangle::Rectangle(){
    itsLength = 10;
    itsWidth = 5;
};
Rectangle::~Rectangle(){
};

int main(){
    Rectangle * pRect = new Rectangle;
    const Rectangle * pConstRect = new Rectangle;
    Rectangle * const pConstPrt = new Rectangle;
    
    cout << "pRect width: "         << pRect->GetWidth()        << " meters" << endl;
    cout << "pConstRect width: "    << pConstRect->GetWidth()   << " meters" << endl;
    cout << "pConstPrt width: "       << pConstPrt->GetWidth()    << " meters" << endl;
    
    pRect -> SetWidth(10);
    // pConstRect -> SetWidth(10);
    pConstPrt -> SetWidth(10);
    
    cout << "pRect width: "         << pRect->GetWidth()        << " meters" << endl;
    cout << "pConstRect width: "    << pConstRect->GetWidth()   << " meters" << endl;
    cout << "pConstPrt width: "       << pConstPrt->GetWidth()    << " meters" << endl;
    
    return 0;
}
