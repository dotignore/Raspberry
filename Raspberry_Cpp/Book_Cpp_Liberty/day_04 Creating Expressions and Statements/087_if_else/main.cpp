// Листинг Приер конструкции с
// ключевыми словами if else
#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int main(){
    int firstNumber, secondNumber;
    cout << "Please enter Big Number: " << endl;
    cin >> firstNumber;
    cout << "Please small Number: " << endl;
    cin >> secondNumber;
    
    if(firstNumber > secondNumber)
        cout << "Tanks! " << endl;
    else
        cout << "Oops. The second is bigger!" << endl;
    
    return 0;
}

