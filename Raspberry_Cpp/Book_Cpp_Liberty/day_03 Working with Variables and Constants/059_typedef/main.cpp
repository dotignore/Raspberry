// ***********************
// Пример определеения типа с помощью typedef
#include <iostream>
using namespace std;

typedef unsigned short int USHORT;

int main(){
    USHORT Width = 5;
    USHORT Lenght;
    Lenght = 10;
    USHORT Area = Width * Lenght;
    cout << "Width: " << Width << "\n";
    cout << "Length: " << Lenght << "\n";
    cout << "Area: " << Area << "\n";
    
    return 0;
}

// Width: 5
// Length: 10
// Area: 50