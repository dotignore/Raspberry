#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    int var1 = 6;           // (int 4 byte) (double 8 byte) long и тд
    int var2 = 3;
    int var3 = 3;
    
    cout << "var1 " << var1 << endl;
    cout << "var2 " << var2 << endl;
    cout << "var3 " << var3 << endl;
    
    cout << "&var1 " << &var1 << " <- 6" << endl;  // получение адреса тем самым находим ячейку памяти
    cout << "&var2 " << &var2 << " <- 3" << endl;  // получение адреса
    cout << "&var3 " << &var3 << " <- 3" << endl << endl;

    int * y; // для хранения адресов нужны переменные указатели
    y = &var1;
    cout << "y " << y <<  " <- 6" << endl;
    cout << "&y " << &y << endl;
    cout << "*y " << *y << endl << endl;
    
    *y = var2;
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
    cout << "y " << y <<  " <- " << endl;
    cout << "&y " << &y << endl;
    cout << "*y " << *y << endl;
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl << endl;

    int * t; // для хранения адресов нужны переменные указатели
    t = &var2;
    cout << "t " << t << " <- 3" << endl;
    cout << "&t " << &t << endl;
    cout << "*t " << *t << endl << endl;
    
    int * r; // для хранения адресов нужны переменные указатели
    r = &var3;
    cout << "r " << r << " <- 3" << endl;
    cout << "&r " << &r << endl;
    cout << "*r " << *r << endl;
    
    
    
    return 0;
}