#include <iostream>
using namespace std;

// Функция DemonsrationFunction
// выводин на экран информационное сообщение

void DemonstrationFunction(){
    cout << "In DemonstrationFunction\n";
}

// Функция main выводит сообщение затем
// выводит функцию DemonstratiinFunction и
// выводит на экран второе сообщение

int main(){
    cout << "in main\n";
    DemonstrationFunction();
    cout << "Back in main\n";
    
    return 0;
}