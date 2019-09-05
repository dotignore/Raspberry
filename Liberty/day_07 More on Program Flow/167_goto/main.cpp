// Листинг 7.1
// Организация цикла с помощью goto
#include<iostream>
using namespace std;

int main(){
    int counter = 0;    // инициализация счётчика
    
loop: counter++;        // начало цикла
    cout << "counter: " << counter << "\n";
    if (counter < 5)    // проверка значения
        goto loop;      // возвращение к началу
    
    cout << "Compile. Couter: " << counter << "\n";
    return 0;
}