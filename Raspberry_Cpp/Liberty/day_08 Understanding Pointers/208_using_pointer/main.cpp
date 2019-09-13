// листинг 8,2 использование указателей
#include<iostream>
using namespace std;

typedef unsigned short int USHORT;
int main(){
    
    USHORT myAge;               // переменная
    USHORT * pAge = 0;          // указатель
    myAge = 5;
    
    cout << "myAge: " << myAge << endl;
    pAge = &myAge;              // присваиваем в pAge адресс myAge
    cout << "*pAge: " << *pAge << endl << endl;
    
    cout << "Setting *pAge = 7... " << endl;
    *pAge = 7;                  // присваиваем myAge значение 7
    
    cout << "*pAge: " << *pAge << endl;
    cout << "myAge: " << myAge << endl << endl;

    cout << "Setting myAge = 9... " << endl;
    myAge = 9;
    
    cout << "myAge: " << myAge << endl;
    cout << "*pAge: " << *pAge << endl;
    
    return 0;
}

// myAge: 5
// *pAge: 5
//
// Setting *pAge = 7...
// *pAge: 7
// myAge: 7
//
// Setting myAge = 9...
// myAge: 9
// *pAge: 9
// Program ended with exit code: 0
