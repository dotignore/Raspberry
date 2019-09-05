
// Листинг 8,9
// Пример возникновения блуждающего указателя
#include<iostream>
using namespace std;

typedef unsigned short int USHORT;                      // имеет размерность от 0 до 65535

int main(){
    USHORT * pInt = new USHORT;                         // это -> создаёт адресс 0x1001000e0
    // с куском памяти объёммом (0-65535)
    *pInt =10;  // *pInt	USHORT	50349	50349
    cout << "*pInt: " << *pInt << endl;                 // *pInt: 10
    cout << "pInt: " << pInt << endl;                   // pInt: 0x1001000e0
    cout << "&pInt: " << &pInt << endl;                  // pInt: 0x7fff5fbff740
    delete pInt;
    
    long * pLong = new long; //pLong	long *	NULL	0x0000000000000000
    *pLong = 90000; // *pLong	long	140735548882954	140735548882954
    cout << endl << "*pLong: " << *pLong << endl;       // *pLong: 90000
    cout << "pLong: " << pLong << endl;                 // pLong: 0x1001000e0
    cout << "&pLong: " << &pLong << endl;               // &pLong: 0x7fff5fbff738
    
    *pInt =20;  // Присвоение освобождённому указателю
    
    cout << endl << "*pInt: " << *pInt << endl;         // *pInt: 20
    cout << "pInt: " << pInt << endl;                   // pInt: 0x1001000e0
    cout << "&pInt: " << &pInt << endl;                 // &pInt: 0x7fff5fbff740
    
    cout << "*pLong: " << *pLong << endl;               // *pLong: 65556            почему тут не значение 65535???
    cout << "pLong: " << pLong << endl;                 // pLong: 0x1001000e0
    cout << "&pLong: " << &pLong << endl;               // &pLong: 0x7fff5fbff738
    delete pLong;
    
    return 0;
}
