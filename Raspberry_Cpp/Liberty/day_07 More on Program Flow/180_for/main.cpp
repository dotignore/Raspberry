#include<iostream>
using namespace std;

int main(){
    int counter = 0;            // установка начального значения счётчика
    
    int max;
    cout << "Введите max: ";
    cin >> max;
    
    for( ; ; ){                 // задание бесконечного цикла
        if(counter < max)       // проверка знаения
        {
            counter++;          // приращение значения
            cout << "counter " << counter << endl;
        }
        else
            break;
    }
    
    return 0;
}
