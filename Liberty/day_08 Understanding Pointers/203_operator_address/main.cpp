// Листинг 8.1 Пример использования
// оператора адреса
#include<iostream>
using namespace std;

int main(){
    
    unsigned short shortVar = 5;
    unsigned long  longVar  = 65535;
             long  sVar     = -65535;
    
    cout << "shortVar:\t" << shortVar;
    cout << "\t\tAddress of shortVar:\t";
    cout << &shortVar << endl;
    
    cout << "longVar:\t" << longVar;
    cout << "\tAddress of longVar:\t\t" ;
    cout << &longVar << endl;
    
    cout << "sVar:\t\t" << sVar;
    cout << "\tAddress of sVar:\t\t" ;
    cout << &sVar << endl;
    
    return 0;
}