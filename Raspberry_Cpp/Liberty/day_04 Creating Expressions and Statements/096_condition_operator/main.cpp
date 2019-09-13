// Пример использования условного оператора
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main(){
    int x, y, z;
    cout << "Enter two numbers. \n";
    
    cout << "First";
    cin >> x;
    cout << "\nSecond";
    cin >> y;
    cout << "\n";
    
    if(x>y)
        z=x;
    else
        z=y;
    
    cout << "z: " << z;
    cout << "\n";
    
    z =(x > y) ? x : y;
    // если выполнятся x > y то присваиваем x
    // если нет то присваиваиваем y
    cout << "z: " << z;
    cout << "\n ";
        
    return 0;
}