// листинг 7,7
// Пример использования  конструкции do...while
#include<iostream>
using namespace std;

int main(){
    int counter;
    cout << "Введите чсло";
    cin >> counter;
    
    do{
        cout << "Hello\n";
        counter--;
    }
    while(counter>0);
    
    cout << "Counter is: " << counter << endl;
    
    return 0;
}