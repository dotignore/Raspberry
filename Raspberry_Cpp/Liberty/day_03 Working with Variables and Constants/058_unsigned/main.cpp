// Демонстрация использования переменных
#include <iostream>
using namespace std;

int main(){
    unsigned short int Width = 5, Length;
    Length = 10;
    
    // создаём переменную Area типа unsigned short и  инициализируем ее
    // результатом умножения значений переменных Whdth на Length
    
    unsigned short int Area = (Width * Length);
    
    cout << "Width: " << Width << "\n";
    cout << "Length: " << Length << "\n";
    cout << "Area: " << Area << "\n";
    
    return 0;
}


// Width: 5
// Length: 10
// Area: 50