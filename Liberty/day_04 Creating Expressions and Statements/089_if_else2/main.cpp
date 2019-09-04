// Листинг 4,7 Пример сложной конструкции
// с вложенными операторами if else
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main(){
    // Запрашиваем два числа
    // Присваиваем числа переменным bigNumber и littleNumber
    // Если значение bigNumber больще значения littleNumber
    // проверяем делится ли большее число на меньшее без остатка
    // Если да проверяем не равны ли они друг другу
    
    int firstNumber, secondNumber;
    cout << "Enter two numbers \n";
    cin >> firstNumber;
    cout << "\nSecond";
    cin >> secondNumber;
    
    if(firstNumber >= secondNumber)
    {
        if((firstNumber % secondNumber) == 0) // evenly division?
        {
            if(firstNumber == secondNumber)
                cout << "Thay are the same!\n";
            else
                cout << "They are evenly divisible!\n";
        }
        else
            cout << "They are not evently divisible!\n";
    }
    else
        cout << "Hey! The second one is larger!\n";
    
    return 0;
}

