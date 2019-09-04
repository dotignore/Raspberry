// Листинг 7.2
// Организация цикла с помощью оператора while
#include<iostream>
using namespace std;

int main(){
    int i=0;
    
    while(i<5){
        i++;
        cout << "Выводим значение i " << i << endl;
    }
    
    cout << "Закончили щичтать цикл на " << i << endl;
    
    return 0;
}