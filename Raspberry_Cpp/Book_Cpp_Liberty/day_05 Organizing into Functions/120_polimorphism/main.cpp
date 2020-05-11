#include<iostream>
using namespace std;

int Double(int);
long Double(long);
float Double(float);
double Double(double);

int main(){
    int myInt = 1;
    int doubledInt = Double(myInt);
    cout << "myInt " << doubledInt << endl;
    
    long myLong = 2;
    long doubledLong = Double(myLong);
    cout << "myLong " << doubledLong << endl;
    
    float myFloat = 3;
    float doubledFloat = Double(myFloat);
    cout << "myFloat " << doubledFloat << endl;
    
    double myDouble = 4;
    double doubledDouble = Double(myDouble);
    cout << "myDouble " << doubledDouble << endl;
    
    return 0;
}

int Double(int original){
    return original * 2;
}
long Double(long original){
    return original * 2;
}
float Double(float original){
    return original * 2;
}
double Double(double original){
    return original * 2;
}



/*
// Листинг 5.8 Пример
// полиморфизм функций
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int Double(int);
long Double(long);
float Double(float);
double Double(double);

int main(){
    int myInt = 6500;
    long myLong = 6500;
    float myFloat = 6.5F;
    double myDouble = 6.5e20;
    
    int doubledInt;
    long doubledLong;
    float doubledFloat;
    double doubledDouble;
    
    cout << "myInt: " << myInt << "\n";
    cout << "myLong: " << myLong << "\n";
    cout << "myFloat: " << myFloat << "\n";
    cout << "myDouble: " << myDouble << "\n";
    
    doubledInt = Double(myInt);
    doubledLong = Double(myLong);
    doubledFloat = Double(myFloat);
    doubledDouble = Double(myDouble);
    
    cout << "doubledInt: " << doubledInt << "\n";
    cout << "doubledLong: " << doubledLong << "\n";
    cout << "doubledFloat: " << doubledFloat << "\n";
    cout << "doubledDouble: " << doubledDouble << "\n";
    
    return 0;
}

int Double(int original){
    cout << "InDouble(int)\n";
    return 2 * original;
}

long Double(long original){
    cout << "InDouble(long)\n";
    return 2 * original;
}

float Double(float original){
    cout << "InDouble(foat)\n";
    return 2 * original;
}
double Double(double original){
    cout << "InDouble(double)\n";
    return 2 * original;
}

*/