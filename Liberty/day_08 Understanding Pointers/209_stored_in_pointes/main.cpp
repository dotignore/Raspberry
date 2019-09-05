// Listing 8.3 What is stored in a pointer.
#include <iostream>
using namespace std;

typedef unsigned short int USHORT;

int main()
{
    unsigned short int myAge = 5, yourAge = 10;
    unsigned short int * pAge = &myAge;  // a pointer
    
        cout << "myAge:\t" << myAge <<  "\t\t\t\tyourAge:\t" << yourAge << "\n" ;
        cout << "&myAge:\t" << &myAge <<  "\t&yourAge:\t" << &yourAge <<"\n";
        cout << endl;

        cout << "*pAge:\t" << *pAge << "\n";
        cout << "pAge:\t" << pAge << "\n";
        cout << endl << endl;

        pAge = &yourAge;       // reassign the pointer
                                        cout << "\t\t\t\t\tpAge = &yourAge:\t" << pAge << "\n";
                                        cout << endl;
    
        cout << "myAge:\t" << myAge <<  "\t\t\t\tyourAge:\t" << yourAge << "\n";
        cout << "&myAge:\t" << &myAge <<  "\t&yourAge:\t" << &yourAge <<"\n";
        cout << endl;

        cout << "\t\t\t\t\t\t*pAge:\t\t" << *pAge << "\n";
        cout << "\t\t\t\t\t\tpAge:\t\t" << pAge << "\n";
        cout << endl;

        cout << "&pAge:\t" << &pAge << "\n";
        cout << "pAge:\t" << pAge << "\n";
        cout << "*pAge:\t" << *pAge << "\n";
    
    return 0;
    }