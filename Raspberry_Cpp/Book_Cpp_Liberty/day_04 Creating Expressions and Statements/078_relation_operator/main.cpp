// листинг 4,4 демонстрирует использование префикстных
// и постфикстных операторов инкремента и декремента

#include <iostream>
using namespace std;

int main(){
    int myAge = 39;     // ициализация двух переменных
    int yourAge = 39;
    
    cout << "I am " << myAge << " year old. \n";            // 39
    cout << "You are: " << yourAge << " year old\n";        // 39
    cout << "\n";
    
    myAge++;            // постфикс инкремент
    ++yourAge;            // перфикстный инкремент
    
    cout << "One year passes...\n";
    cout << "I am: " << myAge << " year old\n";             // 40
    cout << "You are: " << yourAge << " years old\n";       // 40
    cout << "\n";

    cout << "Another year passes\n";
    cout << "I am: " << myAge++ << " years old.\n";         // 40
    cout << "You are: " << ++yourAge << " year old \n";     // 41
    cout << "\n";
    
    cout << "Let`s print it again.\n";
    cout << "I am: " << myAge << " years old \n";           // 41
    cout << "You are: " << yourAge << " year old\n";        // 41
    
    return 0;
}

/*
I am39 year old.
You are: 39 year old

One year passes...
I am: 40 year old
You are: 40 years old

Another year passes
I am: 40 years old.
You are: 41 year old

Let`s print it again.
I am: 41 years old
You are: 41 year old
*/